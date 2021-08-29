/***************************************************************************************************************
 * @auth            : duongdh                                                                                  
 * @day             : âô-july-2021 
 * @file            : debug.h                                                                            
 * @dissaption      : File to create FW-Core . Coding in free time                                                                                       *
***************************************************************************************************************/

#ifndef _DEBUG_H
#define _DEBUG_H

#ifdef __cplusplus
extern "C" {
#endif

/* Include ---------------------------------------------------------------------------------------*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "alerr.h"

#include "freertos/FreeRTOS.h"
#include "freertos/event_groups.h"
#include "freertos/task.h"
#include "esp_system.h"

/* Public macros ---------------------------------------------------------------------------------*/
/* Private data types ----------------------------------------------------------------------------*/
/* Public data types -----------------------------------------------------------------------------*/
/* Define ----------------------------------------------------------------------------------------*/

/* --- Define size story save all tasks --- */

/* --- Define Prority for all tasks --- */

#define ALERR_PRIORITY_TCP              1

/* Private function prototypes -------------------------------------------------------------------*/
/* Public function prototypes --------------------------------------------------------------------*/

#ifdef __cplusplus
}
#endif

#endif /* _DEBUG_H */

/* END OF FILE ************************************************************************************/