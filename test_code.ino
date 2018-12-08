// #include <Servo.h>

// Servo servo_leftB;
// Servo servo_leftF;
// Servo servo_rightB;
// Servo servo_rightF;
// Servo servo_grabR;
// Servo servo_grabL;

// void setup() {
//     servo_leftB.attach(13);
//     servo_leftF.attach(12);
//     servo_rightF.attach(11);
//     servo_rightB.attach(10);
//     servo_grabL.attach(9);
//     servo_grabR.attach(8);
// }

// void wheelsOut() {
//     servo_grabR.write(0); //0 is out
//     servo_grabL.write(180); //180 is out
// }

// void wheelsIn() {
//     servo_grabR.write(180); //180 is in
//     servo_grabL.write(0); //0 is in
// }

// void wheelsStop() {
//     servo_grabR.write(90); //90 is stop
//     servo_grabL.write(90); //90 is stop
// }

// void loop() {
//     servo_leftB.write(0); //forward is 0
//     servo_leftF.write(0); //forward is 0
//     servo_rightB.write(180); //forward is 180
//     servo_rightF.write(180); //forward is 180
//     //wheelsOut();
//     //delay(1000);
//     //wheelsStop();
//     //delay(1000);
//     //wheelsIn();
//     //delay(1000);
//     //wheelsStop();
//     //delay(1000);
// }