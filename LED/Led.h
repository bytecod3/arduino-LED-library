
#ifndef LED_H
#define LED_H

class Led{
private:
    byte pin;

public:
    // setup pin LED and call init
    Led(byte pin);

    // setup pin led as output and power off LED by default
    void init();

    // power on the LED
    void on();

    // power off the LED
    void off();
};

#endif // LED_H
