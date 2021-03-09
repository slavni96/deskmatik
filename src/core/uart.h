#pragma once
#include <SoftwareSerial.h>

class Uart {
    public:
        static void init();
        static void write(uint8_t cmd[], int size);
};

extern Uart uart;
