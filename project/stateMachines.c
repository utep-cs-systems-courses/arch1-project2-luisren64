#include <msp430.h>
#include "stateMachines.h"
#include "led.h"
#include "buzzer.h"
#include "switches.h"

int state = 0; 

void state_advance(){
  switch(state){
  case 1: red_on =1; green_on =0;
    buzzer_set_period(7644); led_update();
    break;
  case 2: red_on =0; green_on =1;
    buzzer_set_period(5102); led_update();
    break;
  case 3: red_on =1; green_on =1;
    buzzer_set_period(4049); led_update();
    break;
  case 4: red_on =0; green_on =0;
    buzzer_set_period(5405); led_update();
    break;
  default:
    red_on = 1; green_on = 1;
    buzzer_set_period(6000); led_update();
    break;
  }
}
  
