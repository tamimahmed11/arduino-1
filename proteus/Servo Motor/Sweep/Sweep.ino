/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 https://www.arduino.cc/en/Tutorial/LibraryExamples/Sweep
*/

#include <Servo.h>

Servo sm1,sm2,sm3;  // create Servo object to control a servo
// twelve Servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

void setup() {
  sm1.attach(10);  // attaches the servo on pin 9 to the Servo object
  sm2.attach(11);  // attaches the servo on pin 9 to the Servo object
  sm3.attach(12);  // attaches the servo on pin 9 to the Servo object
}

void loop() {
  for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
   
    sm1.write(pos);              // tell servo to go to position in variable 'pos'
    sm2.write(pos);              // tell servo to go to position in variable 'pos'
    sm3.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15 ms for the servo to reach the position
  }
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
  
    sm1.write(pos);              // tell servo to go to position in variable 'pos'
    sm2.write(pos);              // tell servo to go to position in variable 'pos'
    sm3.write(pos);          // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15 ms for the servo to reach the position
  }
}
