#define _XTAL_FREQ (8000000)

#include "gpio.h"
#include "pmp_8080.h"

#include <xc.h>


void
main (void)
{
	gpio_init();
	pmp_init();

	DS_RST_SetLow();
	__delay_us(12);
	DS_RST_SetHigh();
	__delay_ms(125);

	uint8_t did[3] = { 0 };
	pmp_write(0, 0x04);
	pmp_read(1);
	did[0] = pmp_read(1);
	did[1] = pmp_read(1);
	did[2] = pmp_read(1);

	while (1)
	{
		DS_BL_Set(ENC_SW_Value());
		LED2_Set(ENC_A_Value());
		LED3_Set(ENC_B_Value());
	}
}
