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

	uint8_t did[4] = { 0 };
	pmp_write(false, 0x04);
	pmp_read_bytes(4, did);

	while (1)
	{
		LED1_Set(ENC_SW_Value());
		LED2_Set(ENC_A_Value());
		LED3_Set(ENC_B_Value());
	}
}
