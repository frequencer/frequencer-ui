#define _XTAL_FREQ (8000000)

#include "gpio.h"
#include "pmp_8080.h"

#include <xc.h>


void
main (void)
{
	gpio_init();
	pmp_init();

	while (1)
	{
		LED1_Set(ENC_SW_Value());
		LED2_Set(ENC_A_Value());
		LED3_Set(ENC_B_Value());
	}
}