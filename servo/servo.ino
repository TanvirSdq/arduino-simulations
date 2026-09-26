#include <Servo.h>

Servo myServo; 

void setup() {
  myServo.attach(9); // Attach the servo to pin 9
}

void loop() {
  // Sweep from 0 to 180 degrees
  for (int pos = 0; pos <= 180; pos += 1) {
    myServo.write(pos);
    delay(15);
  }

  // Sweep back from 180 to 0 degrees
  for (int pos = 180; pos >= 0; pos -= 1) {
    myServo.write(pos);
    delay(15);
  }
}
