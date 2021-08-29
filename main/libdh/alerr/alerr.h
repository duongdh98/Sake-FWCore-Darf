/***************************************************************************************************************
 * @auth            : duongdh                                                                                  
 * @day             : 15-july-2021 
 * @file            : alerr.h                                                                            
 * @dissaption      : File to create FW-Core . Coding in free time                                              
***************************************************************************************************************/

/* Public macros ---------------------------------------------------------------------------------*/
/* Include ---------------------------------------------------------------------------------------*/
/* Define ----------------------------------------------------------------------------------------*/
/* Private data types ----------------------------------------------------------------------------*/
/* Public data types -----------------------------------------------------------------------------*/
/* Private function prototypes -------------------------------------------------------------------*/
/* Public function prototypes --------------------------------------------------------------------*/
/* END OF FILE ************************************************************************************/

#ifndef _ALERR_H
#define _ALERR_H

#ifdef __cplusplus
extern "C" {
#endif

/* Public macros ---------------------------------------------------------------------------------*/
#define ALERR(x)             alerr_get_str_err(x)

/* Public data types -----------------------------------------------------------------------------*/

/* Module definition */
typedef enum
{
    ALERR_MODULE_XXX
} alerr_module_t;

/* Object definition */
typedef enum
{
    ALERR_OBJECT_XXX
} alerr_object_t;

/* Error code definition */
typedef enum
{
    /* Common error code. */
    ALERR_OK                         = 0u,   /* Success. */
    ALERR_OPEN_ALREADY               = 1u,   /* Has been already opened. */
    ALERR_INVALID_PARAM              = 2u,   /* Parameter is NULL. */
    ALERR_MEM_OUT,                           /* Out of memory. */
    ALERR_TIME_OUT,                          /* Out of time. */
    ALERR_NOT_OPEN,                          /* Has not been opened yet or unable to open. */
    ALERR_STORAGE_OUT,                       /* Out of storage. */
    ALERR_EXIST,                             /* Item exists. */

    /* After adding an error code, MUST go to ALerr.c to add a string representation for it. */
    ALERR_EMPTY,                             /**< Storage is empty */
    ALERR_FULL,                              /**< Storage is full */
    ALERR_TX,                                /**< Unable to transmit */
    ALERR_RX,                                /**< Unable to receive */
    ALERR_NOT_FOUND,                         /**< Not found */
    ALERR_UNPLUG,                            /**< Unplug */

    /* FATFS error code */
    ALERR_LINK,                              /**< Unable to link or unlink */

    /* Module internal error code. */
} alerr_t;

/* Public function prototypes --------------------------------------------------------------------*/

/**
  * @brief      Convert an error to a string representation.
  * @param[in]  error_code: an integer indicates an error.
  * @retval     A string representation for such error.
  */

const char *
alerr_get_str_err(alerr_t error_code);

/**
  * @brief      Display system error on LCD and suspend the calling task.
  * @param[in]  module_code: module gets error.
  * @param[in]  object_code: object in evtcap gets error.
  * @param[in]  error_code: error code.
  * @retval     None.
  */
void
zerr_suspend (alerr_module_t module_code, alerr_object_t object_code, alerr_t error_code);
#ifdef __cplusplus
}
#endif

#endif /* _ALERR_H */

/* END OF FILE ************************************************************************************/
