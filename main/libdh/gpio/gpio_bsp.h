/***************************************************************************************************************
 * @auth            : duongdh                                                                                  
 * @day             : 15-july-2021 
 * @file            : gpio_bsp.h                                                                            
 * @dissaption      : File to create FW-Core . Coding in free time                                                                                       *
***************************************************************************************************************/

/* Public macros ---------------------------------------------------------------------------------*/
/* Include ---------------------------------------------------------------------------------------*/
/* Define ----------------------------------------------------------------------------------------*/
/* Private data types ----------------------------------------------------------------------------*/
/* Public data types -----------------------------------------------------------------------------*/
/* Private function prototypes -------------------------------------------------------------------*/
/* Public function prototypes --------------------------------------------------------------------*/
/* END OF FILE ************************************************************************************/

#ifndef _GPIO_BSP_H
#define _GPIO_BSP_H

#ifdef __cplusplus
extern "C" {
#endif

/* Public macros ---------------------------------------------------------------------------------*/

/* Include ---------------------------------------------------------------------------------------*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "driver/gpio.h"

#include "../alerr/alerr.h"

/* Define ----------------------------------------------------------------------------------------*/

/* --- Define pinout foe eso8266 --- */

#define GP_D8       15
#define GP_D7       13
#define GP_D6       12
#define GP_D5       14
#define GP_D4       2
#define GP_D3       0
#define GP_D2       4
#define GP_D1       5
#define GP_D0       16

/* --- Define pin out UART --- */

#define GP_TX       1
#define GP_RX       3

/* --- Define pin out I2c --- */

#define GP_SCL      GP_D1
#define GP_SDA      GP_D2

/* --- Define pin out SPI --- */

#define GP_SCLK     GP_D5
#define GP_MISO     GP_D6
#define GP_MOSI     GP_D7
#define GP_CS       GP_D8

/* --- Define anather --- */

#define GP_WAKE     GP_D0
#define GP_FLASH    GP_D3

/* Private data types ----------------------------------------------------------------------------*/
/* Public data types -----------------------------------------------------------------------------*/

typedef enum{
    
    GP_OPEN,
    GP_PULL_UP,
    GP_PULL_DOWN
} gp_state_t;

/* Private function prototypes -------------------------------------------------------------------*/
/* Public function prototypes --------------------------------------------------------------------*/

void gpin_open(uint32_t pin_num);

void gpin_out_down(uint32_t pin_num);

void gpin_out_up(uint32_t pin_num);

void gp_pull_up(gp_state_t g_gp_state_t, uint32_t pin_num);

alerr_t gp_out_controll(gp_state_t g_gp_state_t, uint32_t pin_num);

alerr_t gp_in_controll(gp_state_t g_gp_state_t, uint32_t pin_num);

#ifdef __cplusplus
}
#endif

#endif /* _ZERR_H */

/* END OF FILE ************************************************************************************/