#include "mbed.h"
#include "crazyflie.h"

PwmOut M1(MOTOR1);

int main(){
    M1 = 1.0;
    wait(12);
    M1 = 0;
}