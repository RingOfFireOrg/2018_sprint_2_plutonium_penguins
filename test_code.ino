#include <Servo.h>

Servo servo_leftB;
Servo servo_leftF;
Servo servo_rightB;
Servo servo_rightF;

void setup() {
    servo_leftB.attach(13);
    servo_leftF.attach(12);
    servo_rightF.attach(11);
    servo_rightB.attach(10);
}

//void forwarLeftB() {
//    servo_leftB.write()
//}

void loop() {
    servo_leftB.write(0); //forward
    servo_leftF.write(0); //forward
    servo_rightB.write(180); //forward
    servo_rightF.write(180); //forward
}