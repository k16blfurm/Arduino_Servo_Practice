#include <Servo.h>

Servo Left_Servo, Right_Servo;

int pos = 0; // servo position


void setup() {
  
  // put your setup code here, to run once:
  Left_Servo.attach(10); // assigning pin for servo
  Right_Servo.attach(11); // assigning pin for servo

  
}

void loop() {

  while(1)
  {
  for(pos = 0; pos <= 180; pos += 1)
  {
    Left_Servo.write(-pos); // assigning pin for servo
    Right_Servo.write(-pos);
    delay(10);
  }
  for(pos = 180; pos >= 0; pos -= 1)
  {
    Left_Servo.write(-pos); // assigning pin for servo
    Right_Servo.write(-pos);
    delay(10);
  }
  }

}
