#include <VescUart.h>
#include <datatypes.h>
#include <Servo.h>

struct bldcMeasure measuredValues;

Servo VESC;

int maxThrottlePosition = 154;
int minThrottlePosition = 0;
int requestedThrottle = 76; // Initialize to no throttle

int position;

void setup() {
  //Setup UART port
  Serial1.begin(115200);
  
  VESC.attach(11, 800, 4000);
  VESC.write(requestedThrottle);
  delay(5000);
}

void loop() {
  updatePosition();
  if (position < 4950) {
    requestedThrottle = 85;
  } else if (position > 5050) {
    requestedThrottle = 67;
  } else {
    requestedThrottle = 76;
  }
  VESC.write(requestedThrottle);
}

int updatePosition() {
  if (VescUartGetValue(measuredValues)) {
    position = measuredValues.tachometer / 65536;
  }
  return position;
}
