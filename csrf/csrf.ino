#include <stdint.h> 
#include "xfire.h"
#include <limits.h>
#include "RTClib.h"
#include <Time.h>
#include <inttypes.h>

/*

void setup() {
  // put your setup code here, to run once:
   startCrossfire();
}


void loop() {
  // put your main code here, to run repeatedly:
  runCrossfire();
}

*/

IntervalTimer csrfTimer;

void setup() {
  Serial.begin(9600);
  startCrossfire();  
  csrfTimer.begin(runCrossfire, REFRESH_INTERVAL);  // blinkLED to run every 0.15 seconds
}

void loop(){

  //noInterrupts();
    //do other stuff
 // interrupts();

  
}
