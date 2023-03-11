#include "./motion.h"

Motion motion;

void Motion::move(int dir) {
    uint8_t cmdBtnUp[] = CMD_BUTTON_UP;
    uint8_t cmdBtnDown[] = CMD_BUTTON_DOWN;

    switch(dir) {
        case  1:
            uart.write(cmdBtnUp, sizeof(cmdBtnUp));
            break;
        case -1:
            uart.write(cmdBtnDown, sizeof(cmdBtnDown));
            break;
    }
}

void Motion::moveTo(int pos) {
    uint8_t cmdBtn1[] = CMD_BUTTON_1;
    uint8_t cmdBtn2[] = CMD_BUTTON_2;
    uint8_t cmdBtn3[] = CMD_BUTTON_3;

    switch(pos) {
        case 1:
            uart.write(cmdBtn1, sizeof(cmdBtn1));
            break;
        case 2:
            uart.write(cmdBtn2, sizeof(cmdBtn2));
            break;
        case 3:
            uart.write(cmdBtn3, sizeof(cmdBtn3));
            break;
    }
}
