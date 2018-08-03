#include <Servo.h>

Servo myServo;

int maxThrottlePosition = 154;
int minThrottlePosition = 0;
int requestedThrottle = 76;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  myServo.attach(11, 800, 4000);
  myServo.write(requestedThrottle);
}

void loop() {
  if (Serial.available()) requestedThrottle = Serial.parseInt();
  int throttle = constrain(requestedThrottle, 0, maxThrottlePosition);
  myServo.write(throttle);
  Serial.println(throttle);
}
