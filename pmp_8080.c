// 8080 8-bit parallel port using same pins as PMP peripheral
// plus some protocol awareness of the ST7789V2 D/CX signal

#define _XTAL_FREQ (8000000)

#include "gpio.h"
#include "pmp_8080.h"

#include <stdbool.h>
#include <stdint.h>
#include <xc.h>

void
pmp_init (void)
{
	// nothing, we are just bit banging it right now
}

void
pmp_write (bool is_data, uint8_t data)
{
	PMA0_Set(is_data);
	PMCS1_SetLow();
	PMD_LAT = data;
	PMWR_SetLow();
	PMD_TRIS = 0x00;
	PMWR_SetHigh();
	PMD_TRIS = 0xFF;
	PMCS1_SetHigh();
}

uint8_t
pmp_read (void)
{
	uint8_t out;

	PMA0_SetHigh();
	PMCS1_SetLow();
	PMD_TRIS = 0xFF;
	PMRD_SetLow();
	asm("nop");
	out = PMD_PORT;
	PMRD_SetHigh();
	PMCS1_SetHigh();

	return out;
}


void
pmp_write_bytes (uint8_t count, uint8_t * in)
{
	uint8_t idx = 0;

	if (count < 1)
	{
		return;
	}

	if (count > (UINT8_MAX - 1))
	{
		// while loop will never exit
		return; // HANG_HERE
	}

	PMA0_SetLow();
	PMCS1_SetLow();
	PMD_LAT = in[idx];
	PMWR_SetLow();
	PMD_TRIS = 0x00;
	PMWR_SetHigh();
	PMA0_SetHigh();

	while (idx < count)
	{
		PMWR_SetLow();
		PMD_LAT = in[idx];
		PMWR_SetHigh();
		idx++;
	}

	PMD_TRIS = 0xFF;
	PMCS1_SetHigh();
}

void
pmp_read_bytes (uint8_t count, uint8_t * out)
{
	uint8_t idx = 0;

	if (count < 1)
	{
		return;
	}

	if (count > (UINT8_MAX - 1))
	{
		// while loop will never exit
		return; // HANG_HERE
	}

	PMA0_SetHigh();
	PMCS1_SetLow();
	PMD_TRIS = 0xFF;

	while (idx < count)
	{
		PMRD_SetLow();
		// asm("nop"); // might be necessary for reading frame memory
		out[idx] = PMD_PORT;
		PMRD_SetHigh();
		idx++;
	}

	PMCS1_SetHigh();
}
