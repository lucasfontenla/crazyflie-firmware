#include "mbed.h"
#include "crazyflie.h"

// Define all LEDs as digital output objects
DigitalOut ledR_red(LED_RED_R,!false);
DigitalOut ledL_red(LED_RED_L,!false);

DigitalOut ledR_green(LED_GREEN_R,!false);
DigitalOut ledL_green(LED_GREEN_L,!false);

DigitalOut ledL_blue(LED_BLUE_L,!false);

// Define all motors as PWM objects
PwmOut M1(MOTOR1);
PwmOut M2(MOTOR2);
PwmOut M3(MOTOR3);
PwmOut M4(MOTOR4);

// Main program
int main()
{
    // Blink blue LED indicating inicialization (5 seconds)
    for(int i = 0; i<10; i++){
        ledL_blue = !ledL_blue;
        wait(0.2);
    }

    // Turn on red LEDs indicating motors are armed
    ledL_red = false;
    ledR_red = false;

    // Test all motors with different frequencies (to make different noises)
    M1 = 0.2;
    wait(0.5);
    M1 = 0.0;
    wait(0.5);
    M1 = 0.5;
    wait(0.5);
    M1 = 0.0;
    wait(1.0);

    M2 = 0.2;
    wait(0.5);
    M2 = 0.0;
    wait(0.5);
    M2 = 0.5;
    wait(0.5);
    M2 = 0.0;
    wait(1.0);

    M3 = 0.2;
    wait(0.5);
    M3 = 0.0;
    wait(0.5);
    M3 = 0.5;
    wait(0.5);
    M3 = 0.0;
    wait(1.0);

    M4 = 0.2;
    wait(0.5);
    M4 = 0.0;
    wait(0.5);
    M4 = 0.5;
    wait(0.5);
    M4 = 0.0;
    wait(1.0);

    M1 = 0.1;
    M2 = 0.1;
    M3 = 0.1;
    M4 = 0.1;
    wait(15.0);
    M1 = 0.0;
    M2 = 0.0;
    M3 = 0.0;
    M4 = 0.0;


    // Turn off red LEDs indicating motors are disarmed
    ledL_red = !false;
    ledR_red = !false;

    // Blink green LEDs indicating end of program
    while(true)
    {
        ledR_green = !ledR_green;
        ledL_green = !ledL_green;
        wait(0.5);
    }
}
