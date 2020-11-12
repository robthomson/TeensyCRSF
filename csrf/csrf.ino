/*
 * Copyright (C) Rob Thomson
 *
 * License GPLv2: http://www.gnu.org/licenses/gpl-2.0.html
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#include <stdint.h> 
#include "xfire.h"
#include <limits.h>
#include "RTClib.h"
#include <Time.h>
#include <inttypes.h>


//bring in all externals related to crossfire
extern uint32_t crossfireChannels[CROSSFIRE_CHANNELS_COUNT];  //pulses data
extern float sensorVario;
extern double sensorGPSLat;
extern double sensorGPSLong;
extern float sensorAltitude;
extern float sensorHeading;
extern uint32_t sensorSpeed;
extern uint32_t sensorSats;
extern float sensorPitch;
extern float sensorRoll;
extern float sensorYaw;
extern double sensorVoltage;
extern double sensorCurrent;
extern double sensorFuel;
extern double sensorRSSI;
extern double sensorSNR;
extern double sensorTXPWR;



void setup() {
  Serial.begin(9600);
  startCrossfire();  //this invokes the crossfire system
}



void loop(){

    //simple access to telemetry using variables as defined above
     Serial.print("Voltage ");
     Serial.println(sensorVoltage);
     Serial.print("Vario ");     
     Serial.println(sensorVario);
    //etc..


    //set all channels to center
    // to set a channel - simply set the array value of crossfireChannels to the pulse position you require
    // crossfire runs from CROSSFIRE_LOW to CROSSFIRE_HIGH as showin in the xfire.h file
    for (int i=0; i<CROSSFIRE_CHANNELS_COUNT; i++) {
        crossfireChannels[i] = CROSSFIRE_CENTER;
  
    }


}
