/***************************************************************************************************************
 * @auth            : duongdh                                                                                  
 * @day             : 15-july-2021
 * @file            : gpio_bsp.c                                                                                 
 * @dissaption      : File to create FW-Core . Coding in free time                                                                                       *
***************************************************************************************************************/



/* Public macros ---------------------------------------------------------------------------------*/
/* Include ---------------------------------------------------------------------------------------*/

#include "libdh/gpio/gpio_bsp.h"

/* Define ----------------------------------------------------------------------------------------*/

#define ONE_UL 1ULL<<

/* Private data types ----------------------------------------------------------------------------*/
/* Public data types -----------------------------------------------------------------------------*/
/* Private function prototypes -------------------------------------------------------------------*/
/* Public function prototypes --------------------------------------------------------------------*/

void gpin_open(uint32_t pin_num){ // Initiazation gpio pin

    gpio_config_t io_conf;
    io_conf.intr_type = GPIO_INTR_DISABLE;
    io_conf.mode = GPIO_MODE_OUTPUT;
    io_conf.pin_bit_mask = ONE_UL pin_num;
    io_conf.pull_down_en = 0;
    io_conf.pull_up_en = 0;
    gpio_config(&io_conf);

}

void gpin_out_down(uint32_t pin_num){ // set
    gpio_set_level(pin_num,0);
}

void gpin_out_up(uint32_t pin_num){ // down
    gpio_set_level(pin_num,1);
}

/* ----- after all, switch to led modele ---- 
*/
alerr_t gp_out_controll(gp_state_t g_gp_state_t, uint32_t pin_num){ // pull up gpio pin
    
    alerr_t ret = ALERR_OK;
    switch (g_gp_state_t)
    {
    case GP_OPEN:
        gpin_open(pin_num); // Init gpio pin out
    case GP_PULL_UP:
        gpin_out_up(pin_num); // pull up
        break;
    case GP_PULL_DOWN:
        gpin_out_down(pin_num); // pull down
        break;
    default:
        break;
    }
    return ret;
}

alerr_t gp_in_controll(gp_state_t g_gp_state_t, uint32_t pin_num){
    
    alerr_t ret = ALERR_OK;
    ret = ALERR_TIME_OUT;
    return ret;
}

/* END OF FILE ************************************************************************************/