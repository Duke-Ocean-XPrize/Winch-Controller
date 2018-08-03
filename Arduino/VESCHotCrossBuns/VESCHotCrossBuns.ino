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

int a = 0;
bool inc = true;
void loop() {
  // if(Serial.available()) requestedThrottle = Serial.parseInt();
  int throttle;
  
//  if (millis() < 2000) throttle = 76;
//  else if (millis() % 2000 < 250) {
//    throttle = 94 + a;
//    inc = false;
//  }
//  else if (millis() % 2000 < 500) throttle = 110 + a;
//  else if (millis() % 2000 < 875) throttle = 105 + a;
//  else if (millis() % 2000 < 1125) throttle = 104 + a;
//  else if (millis() % 2000 < 1325) throttle = 103 + a;
//  else if (millis() % 2000 < 1625) throttle = 101 + a;
//  else if (millis() % 2000 < 1750) throttle = 94 + a;
//  else if (millis() % 2000 < 1875) throttle = 98 + a;
//  else if (millis() % 2000 < 2000) {
//    throttle = 100 + a;
//    if (inc == false) {
//      a += 3;
//      inc = true;
//    }
//  }
  
  
//  else if (millis() % 8000 < 1000) throttle = 96;
//  else if (millis() % 8000 < 1500) throttle = 94;
//  else if (millis() % 8000 < 2000) throttle = 76;
//  else if (millis() % 8000 < 2500) throttle = 98;
//  else if (millis() % 8000 < 3000) throttle = 96;
//  else if (millis() % 8000 < 3500) throttle = 94;
//  
//  else if (millis() % 8000 < 4000) throttle = 76;
//  else if (millis() % 8000 < 4200) throttle = 94;
//  else if (millis() % 8000 < 4250) throttle = 76;
//  else if (millis() % 8000 < 4450) throttle = 94;
//  else if (millis() % 8000 < 4500) throttle = 76;
//  else if (millis() % 8000 < 4700) throttle = 94;
//  else if (millis() % 8000 < 4750) throttle = 76;
//  else if (millis() % 8000 < 4950) throttle = 94;
//  else if (millis() % 8000 < 5000) throttle = 76;
//
//  else if (millis() % 8000 < 5000) throttle = 76;
//  else if (millis() % 8000 < 5200) throttle = 96;
//  else if (millis() % 8000 < 5250) throttle = 76;
//  else if (millis() % 8000 < 5450) throttle = 96;
//  else if (millis() % 8000 < 5500) throttle = 76;
//  else if (millis() % 8000 < 5700) throttle = 96;
//  else if (millis() % 8000 < 5750) throttle = 76;
//  else if (millis() % 8000 < 5950) throttle = 96;
//  else if (millis() % 8000 < 6000) throttle = 76;
//  
//  else if (millis() % 8000 < 6000) throttle = 96;
//  else if (millis() % 8000 < 6500) throttle = 98;
//  else if (millis() % 8000 < 7000) throttle = 96;
//  else if (millis() % 8000 < 7500) throttle = 94;
//  else if (millis() % 8000 < 8000) throttle = 76;

  // throttle = constrain(requestedThrottle, 0, maxThrottlePosition);
  myServo.write(throttle);
  Serial.println(throttle);
}
