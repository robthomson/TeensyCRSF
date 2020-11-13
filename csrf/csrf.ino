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
double sensorGPSLat;
double sensorGPSLong;
float sensorHeading=0;
float sensorAltitude=0;
uint32_t sensorSpeed=0;
uint32_t sensorSats=0;
float sensorPitch=0;
float sensorRoll=0;
float sensorYaw=0;
double sensorVoltage;
double sensorCurrent;
double sensorFuel;
float sensorVario;
uint32_t  sensor1RSS;
uint32_t sensor2RSS;
uint32_t sensorRXQly;
uint32_t sensorRXSNR; 
uint32_t sensorAntenna; 
uint32_t sensorRFMode;
uint32_t sensorTXPWR;
uint32_t sensorTXRSSI; 
uint32_t sensorTXQly;
uint32_t sensorTXSNR;
uint32_t sensorCapacity;




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
