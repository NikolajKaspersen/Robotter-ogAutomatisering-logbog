#ifndef BUTTON_H
#define BUTTON_H

class Button
{
    public:
        Button(int pin);
        void setup(long startTime);
        void update(long now):
        bool GetButtonState();
    private:
    enum ButtonState
    {
        Off,
        Push,
        On,
        Release,
    };
        const static long _noiseCancelTimer = 10;
        int _pin;
        ButtonState _Buttonstate;
        long _nextChangeTime
};

#endif //BUTTON_H