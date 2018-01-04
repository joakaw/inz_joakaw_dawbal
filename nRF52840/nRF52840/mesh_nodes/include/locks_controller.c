#include "locks_controller.h"
#include "main_structures.h"
#include "nrf_gpio.h"

#define LOCK_PIN 29

void set_lock_state(enum lock_state state){

  if(state == OPEN){
    nrf_gpio_pin_set(LOCK_PIN);
  }
  else if(state == CLOSED){
    nrf_gpio_pin_clear(LOCK_PIN);
  }

}


