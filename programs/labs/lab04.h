#include "mbed.h"
#include "crazyflie.h"

PwmOut M1(MOTOR1);
PwmOut M2(MOTOR2);
PwmOut M3(MOTOR3);
PwmOut M4(MOTOR4);


float control_motor(float omega_r){
    float p1 = 1.219e-7f;
    float p2 = 1.211e-12f;

    return (p1*omega_r*omega_r + p2*omega_r);
}

float rpm_to_rads(float rpm){
    return 2.0f*pi*rpm/60.0f;
}

int main(){
    wait(2);
    M1 = control_motor(1000);
    M2 = control_motor(2000);
    M3 = control_motor(1000);
    M4 = control_motor(2000);
    wait(2);
    M1 = 0.0;
    M2 = 0.0;
    M3 = 0.0;
    M4 = 0.0;
}