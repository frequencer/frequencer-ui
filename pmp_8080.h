/* 
 * File:   pmp_8080.h
 * Author: jrowley
 *
 * Created on September 18, 2021, 3:20 PM
 */

#ifndef PMP_8080_H
#define	PMP_8080_H


#include <stdbool.h>
#include <stdint.h>
#include <xc.h>


#define PMD_TRIS TRISD
#define PMD_LAT LATD
#define PMD_PORT PORTD

#define PMA_MAX (1U)


#ifdef	__cplusplus
extern "C" {
#endif


void pmp_init (void);

void pmp_write (bool is_data, uint8_t data);
uint8_t pmp_read (void);

void pmp_write_bytes (uint8_t count, uint8_t * in);
void pmp_write_repeat (uint8_t count, uint8_t * in, uint16_t count_out, uint8_t rpt_size);
void pmp_read_bytes (uint8_t count, uint8_t * out);


#ifdef	__cplusplus
}
#endif

#endif	/* PMP_8080_H */

