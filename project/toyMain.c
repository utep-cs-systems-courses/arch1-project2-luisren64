//Includes will go here
#include <msp430.h>
#include "libTimer.h"
#include "led.h"
#include "switches.h"
#include "buzzer.h"


int main(){
  configureClocks();
  led_init();
  switch_init();
  buzzer_init();
  
  return 0;
}
