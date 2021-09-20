#define _XTAL_FREQ (8000000)

#include "gpio.h"
#include "pmp_8080.h"

#include <xc.h>

static uint8_t gram[241] = { 0x00 };

void
put_rgb565 (uint8_t red, uint8_t green, uint8_t blue, uint8_t * out)
{
	out[0] = red & 0b11111000;
	out[0] |= (green >> 5) & 0b00000111;
	out[1] = (green << 3) & 0b11100000;
	out[1] |= (blue >> 3) & 0b00011111;
}


void
main (void)
{
	gpio_init();
	pmp_init();

	DS_RST_SetLow();
	__delay_us(12);
	DS_RST_SetHigh();
	__delay_ms(5);

	for (uint8_t i = 0; i < 120; i++)
	{
		uint8_t luma = i * 2;
		put_rgb565(luma, luma, luma, &(gram[i * 2 + 1]));
		// put_rgb565(0, 255, 255, &(gram[i * 2 + 1]));
	}

	uint8_t did[4] = { 0 };
	pmp_write(false, 0x04);
	pmp_read_bytes(4, did);

	INTCON2bits.INTEDG1 = 1;
	DS_BL_SetHigh();

	pmp_write(false, 17); // exit sleep mode?

	uint8_t dcmd[2] = { 0x3A, 0b00000101 };
	pmp_write_bytes(2, dcmd); // Set 16bpp RGB input (565)

	pmp_write(false, 0x29); // display on

	uint8_t dcmd2[5] = { 0x2A, 0x00, 0x00, 0x00, 0xEF };
	pmp_write_bytes(5, dcmd2);
	dcmd2[0] = 0x2B;
	dcmd2[3] = 0x01;
	dcmd2[4] = 0x3F;
	pmp_write_bytes(5, dcmd2);

	for (uint16_t y = 0; y < 320; y++)
	{
		gram[0] = 0x3C;
		pmp_write_bytes(241, gram);
		pmp_write_bytes(241, gram); // 16bpp so we split it in half
	}

	for (uint8_t i = 0; i < 120; i++)
	{
		uint8_t luma = (119 - i) * 2;
		put_rgb565(luma, luma, luma, &(gram[i * 2 + 1]));
	}

	uint16_t counter = 0;

	while (1)
	{
		if (INTCON3bits.INT1IF)
		{
			ANY_ON_Toggle();

			uint16_t row = counter % 320;
			dcmd2[0] = 0x2B;
			dcmd2[1] = row >> 8;
			dcmd2[2] = row & 0xFF;
			row += 1;
			dcmd2[3] = row >> 8;
			dcmd2[4] = row & 0xFF;
			pmp_write_bytes(5, dcmd2);

			gram[0] = 0x2C;
			pmp_write_bytes(241, gram);

			counter += 9;
			INTCON3bits.INT1IF = 0;
		}
	}
}
