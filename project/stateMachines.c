#include <msp430.h>
#include "stateMachines.h"
#include "led.h"
#include "buzzer.h"
#include "switches.h"

#define state = 0 

void state_advance(){
  switch(state){
  case 1: red_on^=1; break;
  }

  
