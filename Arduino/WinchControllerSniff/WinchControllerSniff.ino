#include <Servo.h>

Servo myServo;

int maxThrottlePosition = 154;
int minThrottlePosition = 0;
int requestedThrottle = 76;

int hallPinA = A0;
int hallPinB = A1;
int hallPinC = A2;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  myServo.attach(11, 800, 4000);
  myServo.write(requestedThrottle);
  pinMode(hallPinA, INPUT_PULLUP);
  pinMode(hallPinB, INPUT_PULLUP);
  pinMode(hallPinC, INPUT_PULLUP);
}

void loop() {
  if (Serial.available()) requestedThrottle = Serial.parseInt();
  int throttle = constrain(requestedThrottle, 0, maxThrottlePosition);
  myServo.write(throttle);
  Serial.print(throttle);
  Serial.print('\t');
  Serial.print(analogRead(hallPinA));
  Serial.print('\t');
  Serial.print(analogRead(hallPinB));
  Serial.print('\t');
  Serial.println(analogRead(hallPinC));
}
