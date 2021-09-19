/* 
 * File:   gpio.h
 * Author: jrowley
 *
 * Created on September 18, 2021, 3:31 PM
 */

#ifndef GPIO_H
#define	GPIO_H


#include <xc.h>


#ifdef	__cplusplus
extern "C" {
#endif


void gpio_init (void);


#define BC1_Value() (PORTAbits.RA0)
#define BC2_Value() (PORTAbits.RA1)
#define BC3_Value() (PORTAbits.RA2)
#define BC4_Value() (PORTAbits.RA3)
#define BC5_Value() (PORTAbits.RA4)
#define BC6_Value() (PORTAbits.RA5)
#define RA6_Value() (PORTAbits.RA6)
#define RA7_Value() (PORTAbits.RA7)

#define ENC_SW_Value() (PORTBbits.RB0)
#define ENC_B_Value() (PORTBbits.RB1)
#define ENC_A_Value() (PORTBbits.RB2)
#define CT_INT_Value() (PORTBbits.RB3)
#define UI_INT_Value() (PORTBbits.RB4)
#define PMA0_Value() (PORTBbits.RB5)
#define PGD_Value() (PORTBbits.RB6)
#define PGC_Value() (PORTBbits.RB7)

#define DS_RST_Value() (PORTCbits.RC0)
#define DS_BL_Value() (PORTCbits.RC1)
#define ANY_ON_Value() (PORTCbits.RC2)
#define CT_SCL_Value() (PORTCbits.RC3)
#define CT_SDA_Value() (PORTCbits.RC4)
#define CT_RST_Value() (PORTCbits.RC5)
#define DBG_TX_Value() (PORTCbits.RC6)
#define DBG_RX_Value() (PORTCbits.RC7)

#define PMD0_Value() (PORTDbits.RD0)
#define PMD1_Value() (PORTDbits.RD1)
#define PMD2_Value() (PORTDbits.RD2)
#define PMD3_Value() (PORTDbits.RD3)
#define PMD4_Value() (PORTDbits.RD4)
#define PMD5_Value() (PORTDbits.RD5)
#define PMD6_Value() (PORTDbits.RD6)
#define PMD7_Value() (PORTDbits.RD7)

#define PMRD_Value() (PORTEbits.RE0)
#define PMWR_Value() (PORTEbits.RE1)
#define BR1_Value() (PORTEbits.RE2)
#define BR2_Value() (PORTEbits.RE3)
#define BR3_Value() (PORTEbits.RE4)
#define BR4_Value() (PORTEbits.RE5)
#define BR5_Value() (PORTEbits.RE6)
#define BR6_Value() (PORTEbits.RE7)

#define DS_FM_Value() (PORTFbits.RF2)
#define USBN_Value() (PORTFbits.RF3)
#define USBP_Value() (PORTFbits.RF4)
#define LED3_Value() (PORTFbits.RF5)
#define LED2_Value() (PORTFbits.RF6)
#define LED1_Value() (PORTFbits.RF7)

#define PIC_UI_Value() (PORTGbits.RG0)
#define RG1_Value() (PORTGbits.RG1)
#define RG2_Value() (PORTGbits.RG2)
#define PMCS2_Value() (PORTGbits.RG3)
#define PMCS1_Value() (PORTGbits.RG4)


#define BC1_Set(value) {LATAbits.LA0 = (value);}
#define BC1_SetHigh() {LATAbits.LA0 = 1;}
#define BC1_SetLow() {LATAbits.LA0 = 0;}
#define BC1_Toggle() {LATAbits.LA0 ^= 1;}
#define BC2_Set(value) {LATAbits.LA1 = (value);}
#define BC2_SetHigh() {LATAbits.LA1 = 1;}
#define BC2_SetLow() {LATAbits.LA1 = 0;}
#define BC2_Toggle() {LATAbits.LA1 ^= 1;}
#define BC3_Set(value) {LATAbits.LA2 = (value);}
#define BC3_SetHigh() {LATAbits.LA2 = 1;}
#define BC3_SetLow() {LATAbits.LA2 = 0;}
#define BC3_Toggle() {LATAbits.LA2 ^= 1;}
#define BC4_Set(value) {LATAbits.LA3 = (value);}
#define BC4_SetHigh() {LATAbits.LA3 = 1;}
#define BC4_SetLow() {LATAbits.LA3 = 0;}
#define BC4_Toggle() {LATAbits.LA3 ^= 1;}
#define BC5_Set(value) {LATAbits.LA4 = (value);}
#define BC5_SetHigh() {LATAbits.LA4 = 1;}
#define BC5_SetLow() {LATAbits.LA4 = 0;}
#define BC5_Toggle() {LATAbits.LA4 ^= 1;}
#define BC6_Set(value) {LATAbits.LA5 = (value);}
#define BC6_SetHigh() {LATAbits.LA5 = 1;}
#define BC6_SetLow() {LATAbits.LA5 = 0;}
#define BC6_Toggle() {LATAbits.LA5 ^= 1;}
#define RA6_Set(value) {LATAbits.LA6 = (value);}
#define RA6_SetHigh() {LATAbits.LA6 = 1;}
#define RA6_SetLow() {LATAbits.LA6 = 0;}
#define RA6_Toggle() {LATAbits.LA6 ^= 1;}
#define RA7_Set(value) {LATAbits.LA7 = (value);}
#define RA7_SetHigh() {LATAbits.LA7 = 1;}
#define RA7_SetLow() {LATAbits.LA7 = 0;}
#define RA7_Toggle() {LATAbits.LA7 ^= 1;}

#define ENC_SW_Set(value) {LATBbits.LB0 = (value);}
#define ENC_SW_SetHigh() {LATBbits.LB0 = 1;}
#define ENC_SW_SetLow() {LATBbits.LB0 = 0;}
#define ENC_SW_Toggle() {LATBbits.LB0 ^= 1;}
#define ENC_B_Set(value) {LATBbits.LB1 = (value);}
#define ENC_B_SetHigh() {LATBbits.LB1 = 1;}
#define ENC_B_SetLow() {LATBbits.LB1 = 0;}
#define ENC_B_Toggle() {LATBbits.LB1 ^= 1;}
#define ENC_A_Set(value) {LATBbits.LB2 = (value);}
#define ENC_A_SetHigh() {LATBbits.LB2 = 1;}
#define ENC_A_SetLow() {LATBbits.LB2 = 0;}
#define ENC_A_Toggle() {LATBbits.LB2 ^= 1;}
#define CT_INT_Set(value) {LATBbits.LB3 = (value);}
#define CT_INT_SetHigh() {LATBbits.LB3 = 1;}
#define CT_INT_SetLow() {LATBbits.LB3 = 0;}
#define CT_INT_Toggle() {LATBbits.LB3 ^= 1;}
#define UI_INT_Set(value) {LATBbits.LB4 = (value);}
#define UI_INT_SetHigh() {LATBbits.LB4 = 1;}
#define UI_INT_SetLow() {LATBbits.LB4 = 0;}
#define UI_INT_Toggle() {LATBbits.LB4 ^= 1;}
#define PMA0_Set(value) {LATBbits.LB5 = (value);}
#define PMA0_SetHigh() {LATBbits.LB5 = 1;}
#define PMA0_SetLow() {LATBbits.LB5 = 0;}
#define PMA0_Toggle() {LATBbits.LB5 ^= 1;}
#define PGD_Set(value) {LATBbits.LB6 = (value);}
#define PGD_SetHigh() {LATBbits.LB6 = 1;}
#define PGD_SetLow() {LATBbits.LB6 = 0;}
#define PGD_Toggle() {LATBbits.LB6 ^= 1;}
#define PGC_Set(value) {LATBbits.LB7 = (value);}
#define PGC_SetHigh() {LATBbits.LB7 = 1;}
#define PGC_SetLow() {LATBbits.LB7 = 0;}
#define PGC_Toggle() {LATBbits.LB7 ^= 1;}

#define DS_RST_Set(value) {LATCbits.LC0 = (value);}
#define DS_RST_SetHigh() {LATCbits.LC0 = 1;}
#define DS_RST_SetLow() {LATCbits.LC0 = 0;}
#define DS_RST_Toggle() {LATCbits.LC0 ^= 1;}
#define DS_BL_Set(value) {LATCbits.LC1 = (value);}
#define DS_BL_SetHigh() {LATCbits.LC1 = 1;}
#define DS_BL_SetLow() {LATCbits.LC1 = 0;}
#define DS_BL_Toggle() {LATCbits.LC1 ^= 1;}
#define ANY_ON_Set(value) {LATCbits.LC2 = (value);}
#define ANY_ON_SetHigh() {LATCbits.LC2 = 1;}
#define ANY_ON_SetLow() {LATCbits.LC2 = 0;}
#define ANY_ON_Toggle() {LATCbits.LC2 ^= 1;}
#define CT_SCL_Set(value) {LATCbits.LC3 = (value);}
#define CT_SCL_SetHigh() {LATCbits.LC3 = 1;}
#define CT_SCL_SetLow() {LATCbits.LC3 = 0;}
#define CT_SCL_Toggle() {LATCbits.LC3 ^= 1;}
#define CT_SDA_Set(value) {LATCbits.LC4 = (value);}
#define CT_SDA_SetHigh() {LATCbits.LC4 = 1;}
#define CT_SDA_SetLow() {LATCbits.LC4 = 0;}
#define CT_SDA_Toggle() {LATCbits.LC4 ^= 1;}
#define CT_RST_Set(value) {LATCbits.LC5 = (value);}
#define CT_RST_SetHigh() {LATCbits.LC5 = 1;}
#define CT_RST_SetLow() {LATCbits.LC5 = 0;}
#define CT_RST_Toggle() {LATCbits.LC5 ^= 1;}
#define DBG_TX_Set(value) {LATCbits.LC6 = (value);}
#define DBG_TX_SetHigh() {LATCbits.LC6 = 1;}
#define DBG_TX_SetLow() {LATCbits.LC6 = 0;}
#define DBG_TX_Toggle() {LATCbits.LC6 ^= 1;}
#define DBG_RX_Set(value) {LATCbits.LC7 = (value);}
#define DBG_RX_SetHigh() {LATCbits.LC7 = 1;}
#define DBG_RX_SetLow() {LATCbits.LC7 = 0;}
#define DBG_RX_Toggle() {LATCbits.LC7 ^= 1;}

#define PMD0_Set(value) {LATDbits.LD0 = (value);}
#define PMD0_SetHigh() {LATDbits.LD0 = 1;}
#define PMD0_SetLow() {LATDbits.LD0 = 0;}
#define PMD0_Toggle() {LATDbits.LD0 ^= 1;}
#define PMD1_Set(value) {LATDbits.LD1 = (value);}
#define PMD1_SetHigh() {LATDbits.LD1 = 1;}
#define PMD1_SetLow() {LATDbits.LD1 = 0;}
#define PMD1_Toggle() {LATDbits.LD1 ^= 1;}
#define PMD2_Set(value) {LATDbits.LD2 = (value);}
#define PMD2_SetHigh() {LATDbits.LD2 = 1;}
#define PMD2_SetLow() {LATDbits.LD2 = 0;}
#define PMD2_Toggle() {LATDbits.LD2 ^= 1;}
#define PMD3_Set(value) {LATDbits.LD3 = (value);}
#define PMD3_SetHigh() {LATDbits.LD3 = 1;}
#define PMD3_SetLow() {LATDbits.LD3 = 0;}
#define PMD3_Toggle() {LATDbits.LD3 ^= 1;}
#define PMD4_Set(value) {LATDbits.LD4 = (value);}
#define PMD4_SetHigh() {LATDbits.LD4 = 1;}
#define PMD4_SetLow() {LATDbits.LD4 = 0;}
#define PMD4_Toggle() {LATDbits.LD4 ^= 1;}
#define PMD5_Set(value) {LATDbits.LD5 = (value);}
#define PMD5_SetHigh() {LATDbits.LD5 = 1;}
#define PMD5_SetLow() {LATDbits.LD5 = 0;}
#define PMD5_Toggle() {LATDbits.LD5 ^= 1;}
#define PMD6_Set(value) {LATDbits.LD6 = (value);}
#define PMD6_SetHigh() {LATDbits.LD6 = 1;}
#define PMD6_SetLow() {LATDbits.LD6 = 0;}
#define PMD6_Toggle() {LATDbits.LD6 ^= 1;}
#define PMD7_Set(value) {LATDbits.LD7 = (value);}
#define PMD7_SetHigh() {LATDbits.LD7 = 1;}
#define PMD7_SetLow() {LATDbits.LD7 = 0;}
#define PMD7_Toggle() {LATDbits.LD7 ^= 1;}

#define PMRD_Set(value) {LATEbits.LE0 = (value);}
#define PMRD_SetHigh() {LATEbits.LE0 = 1;}
#define PMRD_SetLow() {LATEbits.LE0 = 0;}
#define PMRD_Toggle() {LATEbits.LE0 ^= 1;}
#define PMWR_Set(value) {LATEbits.LE1 = (value);}
#define PMWR_SetHigh() {LATEbits.LE1 = 1;}
#define PMWR_SetLow() {LATEbits.LE1 = 0;}
#define PMWR_Toggle() {LATEbits.LE1 ^= 1;}
#define BR1_Set(value) {LATEbits.LE2 = (value);}
#define BR1_SetHigh() {LATEbits.LE2 = 1;}
#define BR1_SetLow() {LATEbits.LE2 = 0;}
#define BR1_Toggle() {LATEbits.LE2 ^= 1;}
#define BR2_Set(value) {LATEbits.LE3 = (value);}
#define BR2_SetHigh() {LATEbits.LE3 = 1;}
#define BR2_SetLow() {LATEbits.LE3 = 0;}
#define BR2_Toggle() {LATEbits.LE3 ^= 1;}
#define BR3_Set(value) {LATEbits.LE4 = (value);}
#define BR3_SetHigh() {LATEbits.LE4 = 1;}
#define BR3_SetLow() {LATEbits.LE4 = 0;}
#define BR3_Toggle() {LATEbits.LE4 ^= 1;}
#define BR4_Set(value) {LATEbits.LE5 = (value);}
#define BR4_SetHigh() {LATEbits.LE5 = 1;}
#define BR4_SetLow() {LATEbits.LE5 = 0;}
#define BR4_Toggle() {LATEbits.LE5 ^= 1;}
#define BR5_Set(value) {LATEbits.LE6 = (value);}
#define BR5_SetHigh() {LATEbits.LE6 = 1;}
#define BR5_SetLow() {LATEbits.LE6 = 0;}
#define BR5_Toggle() {LATEbits.LE6 ^= 1;}
#define BR6_Set(value) {LATEbits.LE7 = (value);}
#define BR6_SetHigh() {LATEbits.LE7 = 1;}
#define BR6_SetLow() {LATEbits.LE7 = 0;}
#define BR6_Toggle() {LATEbits.LE7 ^= 1;}

#define DS_FM_Set(value) {LATFbits.LF2 = (value);}
#define DS_FM_SetHigh() {LATFbits.LF2 = 1;}
#define DS_FM_SetLow() {LATFbits.LF2 = 0;}
#define DS_FM_Toggle() {LATFbits.LF2 ^= 1;}
#define USBN_Set(value) {LATFbits.LF3 = (value);}
#define USBN_SetHigh() {LATFbits.LF3 = 1;}
#define USBN_SetLow() {LATFbits.LF3 = 0;}
#define USBN_Toggle() {LATFbits.LF3 ^= 1;}
#define USBP_Set(value) {LATFbits.LF4 = (value);}
#define USBP_SetHigh() {LATFbits.LF4 = 1;}
#define USBP_SetLow() {LATFbits.LF4 = 0;}
#define USBP_Toggle() {LATFbits.LF4 ^= 1;}
#define LED3_Set(value) {LATFbits.LF5 = (value);}
#define LED3_SetHigh() {LATFbits.LF5 = 1;}
#define LED3_SetLow() {LATFbits.LF5 = 0;}
#define LED3_Toggle() {LATFbits.LF5 ^= 1;}
#define LED2_Set(value) {LATFbits.LF6 = (value);}
#define LED2_SetHigh() {LATFbits.LF6 = 1;}
#define LED2_SetLow() {LATFbits.LF6 = 0;}
#define LED2_Toggle() {LATFbits.LF6 ^= 1;}
#define LED1_Set(value) {LATFbits.LF7 = (value);}
#define LED1_SetHigh() {LATFbits.LF7 = 1;}
#define LED1_SetLow() {LATFbits.LF7 = 0;}
#define LED1_Toggle() {LATFbits.LF7 ^= 1;}

#define PIC_UI_Set(value) {LATGbits.LG0 = (value);}
#define PIC_UI_SetHigh() {LATGbits.LG0 = 1;}
#define PIC_UI_SetLow() {LATGbits.LG0 = 0;}
#define PIC_UI_Toggle() {LATGbits.LG0 ^= 1;}
#define RG1_Set(value) {LATGbits.LG1 = (value);}
#define RG1_SetHigh() {LATGbits.LG1 = 1;}
#define RG1_SetLow() {LATGbits.LG1 = 0;}
#define RG1_Toggle() {LATGbits.LG1 ^= 1;}
#define RG2_Set(value) {LATGbits.LG2 = (value);}
#define RG2_SetHigh() {LATGbits.LG2 = 1;}
#define RG2_SetLow() {LATGbits.LG2 = 0;}
#define RG2_Toggle() {LATGbits.LG2 ^= 1;}
#define PMCS2_Set(value) {LATGbits.LG3 = (value);}
#define PMCS2_SetHigh() {LATGbits.LG3 = 1;}
#define PMCS2_SetLow() {LATGbits.LG3 = 0;}
#define PMCS2_Toggle() {LATGbits.LG3 ^= 1;}
#define PMCS1_Set(value) {LATGbits.LG4 = (value);}
#define PMCS1_SetHigh() {LATGbits.LG4 = 1;}
#define PMCS1_SetLow() {LATGbits.LG4 = 0;}
#define PMCS1_Toggle() {LATGbits.LG4 ^= 1;}


#define BC1_SetInput() {TRISAbits.RA0 = 1;}
#define BC1_SetOutput() {TRISAbits.RA0 = 0;}
#define BC2_SetInput() {TRISAbits.RA1 = 1;}
#define BC2_SetOutput() {TRISAbits.RA1 = 0;}
#define BC3_SetInput() {TRISAbits.RA2 = 1;}
#define BC3_SetOutput() {TRISAbits.RA2 = 0;}
#define BC4_SetInput() {TRISAbits.RA3 = 1;}
#define BC4_SetOutput() {TRISAbits.RA3 = 0;}
#define BC5_SetInput() {TRISAbits.RA4 = 1;}
#define BC5_SetOutput() {TRISAbits.RA4 = 0;}
#define BC6_SetInput() {TRISAbits.RA5 = 1;}
#define BC6_SetOutput() {TRISAbits.RA5 = 0;}
#define RA6_SetInput() {TRISAbits.RA6 = 1;}
#define RA6_SetOutput() {TRISAbits.RA6 = 0;}
#define RA7_SetInput() {TRISAbits.RA7 = 1;}
#define RA7_SetOutput() {TRISAbits.RA7 = 0;}

#define ENC_SW_SetInput() {TRISBbits.RB0 = 1;}
#define ENC_SW_SetOutput() {TRISBbits.RB0 = 0;}
#define ENC_B_SetInput() {TRISBbits.RB1 = 1;}
#define ENC_B_SetOutput() {TRISBbits.RB1 = 0;}
#define ENC_A_SetInput() {TRISBbits.RB2 = 1;}
#define ENC_A_SetOutput() {TRISBbits.RB2 = 0;}
#define CT_INT_SetInput() {TRISBbits.RB3 = 1;}
#define CT_INT_SetOutput() {TRISBbits.RB3 = 0;}
#define UI_INT_SetInput() {TRISBbits.RB4 = 1;}
#define UI_INT_SetOutput() {TRISBbits.RB4 = 0;}
#define PMA0_SetInput() {TRISBbits.RB5 = 1;}
#define PMA0_SetOutput() {TRISBbits.RB5 = 0;}
#define PGD_SetInput() {TRISBbits.RB6 = 1;}
#define PGD_SetOutput() {TRISBbits.RB6 = 0;}
#define PGC_SetInput() {TRISBbits.RB7 = 1;}
#define PGC_SetOutput() {TRISBbits.RB7 = 0;}

#define DS_RST_SetInput() {TRISCbits.RC0 = 1;}
#define DS_RST_SetOutput() {TRISCbits.RC0 = 0;}
#define DS_BL_SetInput() {TRISCbits.RC1 = 1;}
#define DS_BL_SetOutput() {TRISCbits.RC1 = 0;}
#define ANY_ON_SetInput() {TRISCbits.RC2 = 1;}
#define ANY_ON_SetOutput() {TRISCbits.RC2 = 0;}
#define CT_SCL_SetInput() {TRISCbits.RC3 = 1;}
#define CT_SCL_SetOutput() {TRISCbits.RC3 = 0;}
#define CT_SDA_SetInput() {TRISCbits.RC4 = 1;}
#define CT_SDA_SetOutput() {TRISCbits.RC4 = 0;}
#define CT_RST_SetInput() {TRISCbits.RC5 = 1;}
#define CT_RST_SetOutput() {TRISCbits.RC5 = 0;}
#define DBG_TX_SetInput() {TRISCbits.RC6 = 1;}
#define DBG_TX_SetOutput() {TRISCbits.RC6 = 0;}
#define DBG_RX_SetInput() {TRISCbits.RC7 = 1;}
#define DBG_RX_SetOutput() {TRISCbits.RC7 = 0;}

#define PMD0_SetInput() {TRISDbits.RD0 = 1;}
#define PMD0_SetOutput() {TRISDbits.RD0 = 0;}
#define PMD1_SetInput() {TRISDbits.RD1 = 1;}
#define PMD1_SetOutput() {TRISDbits.RD1 = 0;}
#define PMD2_SetInput() {TRISDbits.RD2 = 1;}
#define PMD2_SetOutput() {TRISDbits.RD2 = 0;}
#define PMD3_SetInput() {TRISDbits.RD3 = 1;}
#define PMD3_SetOutput() {TRISDbits.RD3 = 0;}
#define PMD4_SetInput() {TRISDbits.RD4 = 1;}
#define PMD4_SetOutput() {TRISDbits.RD4 = 0;}
#define PMD5_SetInput() {TRISDbits.RD5 = 1;}
#define PMD5_SetOutput() {TRISDbits.RD5 = 0;}
#define PMD6_SetInput() {TRISDbits.RD6 = 1;}
#define PMD6_SetOutput() {TRISDbits.RD6 = 0;}
#define PMD7_SetInput() {TRISDbits.RD7 = 1;}
#define PMD7_SetOutput() {TRISDbits.RD7 = 0;}

#define PMRD_SetInput() {TRISEbits.RE0 = 1;}
#define PMRD_SetOutput() {TRISEbits.RE0 = 0;}
#define PMWR_SetInput() {TRISEbits.RE1 = 1;}
#define PMWR_SetOutput() {TRISEbits.RE1 = 0;}
#define BR1_SetInput() {TRISEbits.RE2 = 1;}
#define BR1_SetOutput() {TRISEbits.RE2 = 0;}
#define BR2_SetInput() {TRISEbits.RE3 = 1;}
#define BR2_SetOutput() {TRISEbits.RE3 = 0;}
#define BR3_SetInput() {TRISEbits.RE4 = 1;}
#define BR3_SetOutput() {TRISEbits.RE4 = 0;}
#define BR4_SetInput() {TRISEbits.RE5 = 1;}
#define BR4_SetOutput() {TRISEbits.RE5 = 0;}
#define BR5_SetInput() {TRISEbits.RE6 = 1;}
#define BR5_SetOutput() {TRISEbits.RE6 = 0;}
#define BR6_SetInput() {TRISEbits.RE7 = 1;}
#define BR6_SetOutput() {TRISEbits.RE7 = 0;}

#define DS_FM_SetInput() {TRISFbits.RF2 = 1;}
#define DS_FM_SetOutput() {TRISFbits.RF2 = 0;}
#define USBN_SetInput() {TRISFbits.RF3 = 1;}
#define USBN_SetOutput() {TRISFbits.RF3 = 0;}
#define USBP_SetInput() {TRISFbits.RF4 = 1;}
#define USBP_SetOutput() {TRISFbits.RF4 = 0;}
#define LED3_SetInput() {TRISFbits.RF5 = 1;}
#define LED3_SetOutput() {TRISFbits.RF5 = 0;}
#define LED2_SetInput() {TRISFbits.RF6 = 1;}
#define LED2_SetOutput() {TRISFbits.RF6 = 0;}
#define LED1_SetInput() {TRISFbits.RF7 = 1;}
#define LED1_SetOutput() {TRISFbits.RF7 = 0;}

#define PIC_UI_SetInput() {TRISGbits.RG0 = 1;}
#define PIC_UI_SetOutput() {TRISGbits.RG0 = 0;}
#define RG1_SetInput() {TRISGbits.RG1 = 1;}
#define RG1_SetOutput() {TRISGbits.RG1 = 0;}
#define RG2_SetInput() {TRISGbits.RG2 = 1;}
#define RG2_SetOutput() {TRISGbits.RG2 = 0;}
#define PMCS2_SetInput() {TRISGbits.RG3 = 1;}
#define PMCS2_SetOutput() {TRISGbits.RG3 = 0;}
#define PMCS1_SetInput() {TRISGbits.RG4 = 1;}
#define PMCS1_SetOutput() {TRISGbits.RG4 = 0;}



#ifdef	__cplusplus
}
#endif

#endif	/* GPIO_H */

