#include <stdint.h> 
#include "xfire.h"
#include <limits.h>
#include "RTClib.h"
#include <Time.h>
#include <inttypes.h>
#include "TeensyTimerTool.h"

using namespace TeensyTimerTool;


PeriodicTimer csrfTimer;

void setup() {
  Serial.begin(9600);
  startCrossfire();  

  csrfTimer.begin(setupPulsesCrossfire, (REFRESH_INTERVAL*1000)); 

}



void loop(){

  //noInterrupts();
    //do other stuff
 // interrupts();

  
}
