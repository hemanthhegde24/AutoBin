/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 https://www.arduino.cc/en/Tutorial/LibraryExamples/Sweep
*/

#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}
void display(int deg){
  //const int x=pos;
  for (int pos=0; pos <= deg; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    delay(2000); 
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(2000);                       // waits 15 ms for the servo to reach the position
  }
  for (pos = deg; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos); 
    delay(2000);// tell servo to go to position in variable 'pos'
}exit(0);
}
void loop() {
  char fun='d';
  switch(fun){
    case 'w':display(150+150);break;
    case 'd':display(240+240);break;
    case 'r':display(360+360);break;
    
    }
  /*for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15 ms for the servo to reach the position
  }
    exit(0);*/
  /*for (pos = 120; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15 ms for the servo to reach the position
  }*/
}
