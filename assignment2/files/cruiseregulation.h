#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

#define speedMin 30.0 
#define speedMax 150.0 
#define pedelMin 3.0
#define speedInc 2.5 

float saturateThrottle(float throttleIn, bool* saturate);
float regulateThrottle(int isGoingOn, float cruiseSpeed, float vehicleSpeed);
