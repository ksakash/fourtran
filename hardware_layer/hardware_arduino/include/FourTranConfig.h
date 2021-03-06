#ifndef FourTran_CONFIG_H
#define FourTran_CONFIG_H

//define robot' specs here
#define MAX_RPM 200 // motor's maximum RPM
#define WHEEL_DIAMETER 0.12 // wheel's diameter in meters
#define PWM_BITS 8 // PWM Resolution of the microcontroller
#define BASE_WIDTH 0.235 // width of the plate you are using

/*
ROBOT ORIENTATION
         FRONT
         MOTOR3
    MOTOR2     MOTOR1
        MOTOR4
         BACK
*/

#define MOTOR1_PWM 3
#define MOTOR1_IN_A 2
#define MOTOR1_IN_B 4
#define MOTOR1_CURRENT 5

#define MOTOR2_PWM 6
#define MOTOR2_IN_A 5
#define MOTOR2_IN_B 7
#define MOTOR2_CURRENT 4

#define MOTOR3_PWM 10
#define MOTOR3_IN_A 9
#define MOTOR3_IN_B 8
#define MOTOR3_CURRENT 3

#define MOTOR4_PWM 11
#define MOTOR4_IN_A 12
#define MOTOR4_IN_B 13
#define MOTOR4_CURRENT 2

#endif
