/*
 * This example shows you how to blink an LED using this LED library
 */

#include <Led.h>

#define LED_PIN 13

// define LED class instance globally
Led led1(LED_PIN);

void setup(){

}

void loop(){

    led1.on();
    delay(400);
    led1.off();
    delay(400);

}