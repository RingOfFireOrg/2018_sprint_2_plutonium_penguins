#include <Servo.h>
#include <time.h>
#include "ds_interface.h"
#include "Blinker.h"
#include "ServoDriveTrain.h"

Servo servo_leftB;
Servo servo_leftF;
Servo servo_rightB;
Servo servo_rightF;
Servo servo_grabR;
Servo servo_grabL;

#define RX_FROM_NMCU 4
#define TX_TO_NMCU 5

DS_Interface ds(RX_FROM_NMCU, TX_TO_NMCU);

//#define PIN_SERVO_LEFT_BACK 13 //this is strongly recommended

void setup() {
    servo_leftB.attach(13);
    servo_leftF.attach(12);
    servo_rightF.attach(11);
    servo_rightB.attach(10);
    servo_grabL.attach(9);
    servo_grabR.attach(8);
    ds.init();
    Serial.begin(115200);
}

void wheelsOut() {
    servo_grabR.write(0); //0 is out
    servo_grabL.write(180); //180 is out
}

void wheelsIn() {
    servo_grabR.write(180); //180 is in
    servo_grabL.write(0); //0 is in
}

void wheelsStop() {
    servo_grabR.write(90); //90 is stop
    servo_grabL.write(90); //90 is stop
}

void driveForward2() {
    servo_leftB.write(0); //forward is 0
    servo_leftF.write(0); //forward is 0
    servo_rightB.write(180); //forward is 180
    servo_rightF.write(180); //forward is 180
}

void driveReverse() {
    servo_leftB.write(180); //forward is 0
    servo_leftF.write(180); //forward is 0
    servo_rightB.write(0); //forward is 180
    servo_rightF.write(0); //forward is 180
}

void driveLeft() {
    servo_leftB.write(180); //forward is 0
    servo_leftF.write(180); //forward is 0
    servo_rightB.write(180); //forward is 180
    servo_rightF.write(180); //forward is 180
}

void driveRight() {
    servo_leftB.write(0); //forward is 0
    servo_leftF.write(0); //forward is 0
    servo_rightB.write(0); //forward is 180
    servo_rightF.write(0); //forward is 180
}

void driveStop() {
    servo_leftB.write(90); //forward is 0
    servo_leftF.write(90); //forward is 0
    servo_rightB.write(90); //forward is 180
    servo_rightF.write(90); //forward is 180
}

void loop () {
    char stp[2];
    stp[1]=0;
    char input = ds.readInputIfAvailable();
     // decide if this input should trigger a change our recorded
     // state:
     stp[0] = input;
     if (input) {
         Serial.println(stp);
     }
     switch (input) {
         case 'w':
            driveForward2();
            break;
        case 's':
            driveStop();
            break;
     }
     delay(10);
}
