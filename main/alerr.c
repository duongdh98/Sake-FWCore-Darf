/***************************************************************************************************************
 * @auth            : duongdh                                                                                  
 * @day             : 15-july-2021 
 * @file            : alerr.h                                                                            
 * @dissaption      : File to create FW-Core . Coding in free time                                                                                       *
***************************************************************************************************************/

/*  Indent using spaces
    Tab width   : 4 spaces
    Line width  : 100 characters
    Line ending : LF (0x0A) */

/* Includes --------------------------------------------------------------------------------------*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>

#include "libdh/alerr/alerr.h"
/* Global configuration */

/* Private macros --------------------------------------------------------------------------------*/

#define ALERR_MAX_LEN_STR_ERR          8 /* Maximum length of error string displayed on LCD. */

/* Private data types ----------------------------------------------------------------------------*/

/* Error information definition. */
typedef struct 
{
    uint32_t offset;    /* Position of the string representation. */
    alerr_t  code;      /* Error code. */
}alerr_info_t;

/* Private variables -----------------------------------------------------------------------------*/

const uint32_t g_num_err = 11;    /* The number of elements in g_err_info. */

/* Error information. */
const alerr_info_t g_err_info[] = {

    {0, ALERR_OK                },
    {1, ALERR_OPEN_ALREADY      },
    {2, ALERR_INVALID_PARAM     },
    {3, ALERR_MEM_OUT           },
    {4, ALERR_TIME_OUT          },
    {5, ALERR_NOT_OPEN          },
    {6, ALERR_STORAGE_OUT       },
    {7, ALERR_EXIST             },

    /* Modify g_num_err variable if add more any elements. */
};

/* String representation for error. */
static const char* gp_str_err[] = {
    /*  0  */ "ok.",
    /*  1  */ "has been already opened.",
    /*  2  */ "invalid parameter!",
    /*  3  */ "out of memory!",
    /*  4  */ "out of time!",
    /*  5  */ "not opened yet!",
    /*  6  */ "out of storage!",
    /*  7  */ "exist!",
    /*  8  */ "",
    /*  9  */ "",
    /*  10 */ "",
    /*  11 */ "",
    /*  12 */ "",
    /*  13 */ "",
    /*  14 */ "",
    /*  15 */ "",
    /*  16 */ "",
    /*  17 */ "",
    /*  18 */ "",
    /*  19 */ "",
    /* Add a string representation for an appropriate error with respect for it's order. */
};

/* Private function prototypes -------------------------------------------------------------------*/

/* Public function bodies ------------------------------------------------------------------------*/

/**
  * @brief      Convert an error to a string representation.
  * @param[in]  error_code: an integer indicates an error.
  * @retval     A string representation for such error.
  */
const char*
alerr_get_str_err(alerr_t error_code)
{
    uint32_t i = 0;
    const char* str_err = "unknown error!";

    /* Look up the array of error information. */
    for (; i < g_num_err; ++i)
    {
        if (g_err_info[i].code == error_code)
        {
            /* Found error code. */
            str_err = gp_str_err[g_err_info[i].offset];
            break;
        }
    }

    return str_err;
}