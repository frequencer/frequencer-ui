#define _XTAL_FREQ (8000000)

#include "gpio.h"
#include "pmp_8080.h"

#include <xc.h>

void
pmp_init (void)
{
	
}

void
pmp_write (uint8_t address, uint8_t data)
{
	if (address > PMA_MAX)
	{
		return; // HANG_HERE
	}

	PMA0_Set(address);
	PMD_LAT = data;
	PMD_TRIS = 0x00;
}

uint8_t
pmp_read (uint8_t address)
{
	if (address > PMA_MAX)
	{
		return; // HANG_HERE
	}

	return 0;
}
