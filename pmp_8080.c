#define _XTAL_FREQ (8000000)

#include "gpio.h"
#include "pmp_8080.h"

#include <xc.h>

void
pmp_init (void)
{
	// nothing, we are just bit banging it right now
}

void
pmp_write (uint8_t address, uint8_t data)
{
	if (address > PMA_MAX)
	{
		return; // HANG_HERE
	}

	PMA0_Set(address);
	PMCS1_SetLow();
	PMD_LAT = data;
	PMWR_SetLow();
	PMD_TRIS = 0x00;
	PMWR_SetHigh();
	PMD_TRIS = 0xFF;
	PMCS1_SetHigh();
}

uint8_t
pmp_read (uint8_t address)
{
	uint8_t out;

	if (address > PMA_MAX)
	{
		return 0; // HANG_HERE
	}

	PMA0_Set(address);
	PMCS1_SetLow();
	PMD_TRIS = 0xFF;
	PMRD_SetLow();
	asm("nop");
	out = PMD_PORT;
	PMRD_SetHigh();
	PMCS1_SetHigh();

	return out;
}
