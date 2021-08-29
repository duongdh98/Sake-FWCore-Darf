  
/***************************************************************************************************************
 * @auth            : duongdh                                                                                  
 * @day             : 15-july-2021 
 * @file            : alerr.h                                                                            
 * @dissaption      : File to create FW-Core . Coding in free time                                                                                       *
***************************************************************************************************************/


/* Public macros ---------------------------------------------------------------------------------*/

/* Include ---------------------------------------------------------------------------------------*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*--- ESP Log ---*/
#include "esp_log.h"
#include "libdh/alerr/debug.h"

#include "libdh/tcp/tcp.h"

/* Define ----------------------------------------------------------------------------------------*/

#define LED1        GP_D8
#define LED2        GP_D7
#define LED3        GP_D6

#define DELAY(ms_second) vTaskDelay(ms_second * configTICK_RATE_HZ / 1000 )

/* Private data types ----------------------------------------------------------------------------*/

/* Public data types -----------------------------------------------------------------------------*/

/* Private function prototypes -------------------------------------------------------------------*/
/* Public function prototypes --------------------------------------------------------------------*/

void app_main(void)
{
    ESP_ERROR_CHECK(nvs_flash_init());
    tcp_protocol_init();
}

/* END OF FILE ************************************************************************************/
