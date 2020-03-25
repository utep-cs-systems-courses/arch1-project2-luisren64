#include <msp430.h>
#include "led.h"

unsigned char red_on = 0;
unsigned char green_on = 0;

static char redVal[] = {0, LED_RED};
static char greenVal[] = {0, LED_GREEN};

void led_init(){
  P1DIR |= LEDS;
  led_update();
}


int led_update(){
  char ledFlags = redVal[red_on] | greenVal[green_on];
  
  P1OUT &= (0xff^LEDS) | ledflags;
  P1OUT |= ledFlags;
}
