// 8080 8-bit parallel port using PMP peripheral
// plus some protocol awareness of the ST7789V2 D/CX signal

#include "gpio.h"
#include "pmp_8080.h"

#include <stdbool.h>
#include <stdint.h>
#include <xc.h>

void
pmp_init (void)
{
	PMCONHbits.PMPEN = 0;
	PMCONHbits.PTWREN = 1;
	PMCONHbits.PTRDEN = 1;
	PMCONLbits.CSF1 = 1;
	PMCONLbits.CS2P = 1; // don't actually want to use that pin
	PMMODEHbits.MODE = 0b10;
	PMEHbits.PTEN14 = 1;
	PMEHbits.PTEN15 = 1;
	PMCONHbits.PMPEN = 1;
	PMADDRHbits.CS1 = 1;
	PMADDRHbits.CS2 = 0;
}

void
pmp_write (bool is_data, uint8_t data)
{
	PMA0_Set(is_data);
	PMDIN1L = data;
}

uint8_t
pmp_read (void)
{
	uint8_t out;

	PMA0_SetHigh();
	out = PMDIN1L; // dummy read
	out = PMDIN1L;

	return out;
}


void
pmp_write_bytes (uint8_t count, uint8_t * in)
{
	uint8_t idx = 1;

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
	PMDIN1L = in[0];
	PMA0_SetHigh();

	while (idx < count)
	{
		PMDIN1L = in[idx];
		idx++;
	}
}

void
pmp_write_repeat (uint8_t count, uint8_t * in, uint16_t count_out, uint8_t rpt_size)
{
	uint8_t idx = 1;
	uint16_t real_idx = 1;

	if (count_out < 1)
	{
		return;
	}

	if (count_out > (UINT16_MAX - 1))
	{
		// while loop will never exit
		return; // HANG_HERE
	}

	PMA0_SetLow();
	PMDIN1L = in[0];
	PMA0_SetHigh();

	while (real_idx < count_out)
	{
		PMDIN1L = in[idx];
		idx++;
		real_idx++;

		if (idx >= count)
		{
			idx -= rpt_size;
		}
	}
}

void
pmp_read_bytes (uint8_t count, uint8_t * out)
{
	uint8_t dummy, idx = 0;

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
	dummy = PMDIN1L;

	while (idx < count)
	{
		out[idx] = PMDIN1L;
		idx++;
	}
}
