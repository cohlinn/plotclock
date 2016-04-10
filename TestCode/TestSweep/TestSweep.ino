 /* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

void setup() {
  myservo.attach(2);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  //for (pos = 45; pos <= 90; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    //myservo.write(pos);              // tell servo to go to position in variable 'pos'
    //myservo.read();
    myservo.write(65);
    delay(1000);                       // waits 15ms for the servo to reach the position
    myservo.write(95);
    delay(1000);                       // waits 15ms for the servo to reach the position
    myservo.write(111);
    delay(2000);                       // waits 15ms for the servo to reach the position
  //}
  
}

