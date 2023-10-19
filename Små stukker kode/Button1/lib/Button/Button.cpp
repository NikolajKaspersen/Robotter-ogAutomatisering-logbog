#include "Button.h"
#include "Arduino.h"
Button::Button(int pin) : _pin(pin){}
void Button::setup(long start)
{
    pinMode(_pin, INPUT_PULLUP);
    _buttonstate = off;
}
void Button::update(long now)
{
    Swit
}

bool Button::GetButtonState
    