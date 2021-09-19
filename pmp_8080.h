/* 
 * File:   pmp_8080.h
 * Author: jrowley
 *
 * Created on September 18, 2021, 3:20 PM
 */

#ifndef PMP_8080_H
#define	PMP_8080_H


#include <stdint.h>
#include <xc.h>


#define PMD_TRIS TRISD
#define PMD_LAT LATD
#define PMD_PORT PORTD


#ifdef	__cplusplus
extern "C" {
#endif


void pmp_init (void);

void pmp_write (uint8_t address, uint8_t data);
uint8_t pmp_read (uint8_t address);


#ifdef	__cplusplus
}
#endif

#endif	/* PMP_8080_H */

