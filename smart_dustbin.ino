#include <Servo.h>

// Pin assignments
const int TRIG_PIN = 9;
const int ECHO_PIN = 10;
const int SERVO1_PIN = 8;
const int SERVO2_PIN = 7; // Change pin number if your second servo is on a different pin

Servo servo1;
Servo servo2;

long readUltrasonicDistance(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  
  pinMode(echoPin, INPUT);
  return pulseIn(echoPin, HIGH);
}

void setup()
{
  servo1.attach(SERVO1_PIN, 500, 2500);
  servo2.attach(SERVO2_PIN, 500, 2500);
}

void loop()
{
  // Convert pulse time to distance in centimeters
  long distanceCm = 0.01723 * readUltrasonicDistance(TRIG_PIN, ECHO_PIN);

  if (distanceCm <= 30) {
    // Open lid (rotate both servos to 90 degrees)
    servo1.write(90);
    servo2.write(90);
    delay(2000); // Hold open for 2 seconds
    
    // Close lid
    servo1.write(0);
    servo2.write(0);
  }
}
