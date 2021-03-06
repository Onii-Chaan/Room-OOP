#ifndef led
#define led
#include "Arduino.h"
#include "Adafruit_NeoPixel.h"
class Led{
    public:
        Led(byte redPin, byte greenPin, byte bluePin, String objName);
        Led(){};
        String name;
        void execute();
        byte rgb[3]; //stores 12v led strip rgb values
        String state();
        bool getRun();
        void stop();
        String getState();
    private:
        bool _run;
        byte _redPin;
        byte _bluePin;
        byte _greenPin;
};

class AdrLed : public Led {
    public:
        AdrLed(String objName);
};
#endif