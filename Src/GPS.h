#ifndef _GPS_H_
   #define _GPS_H_

/* Include Required Libs */
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>

/* Data Structures */

// GGA - essential fix data which provide 3D location and accuracy data
typedef struct {
    uint8_t timestamp_utc;
    float latitude;
    float longitude; 
    uint8_t fix_quality;
    uint8_t num_of_satellites;
    float horizontal_dilution;
    float altitude; // meters above sea level
    float height_geoid;
    uint16_t DGPS_diff; // time in seconds since last DGPS update
    uint8_t DGPS_id; // DGPS station ID number
    uint8_t checksum;

} GPGGA_t;

// RMC - Rcommended Minimum for essential gps pvt(position, velocity, time) data
typedef struct {
    uint8_t timestamp_utc;
    char status; // A=active or V=void
    float latitude;
    float longitude;
    float speed; // speed over ground in knots
    float track_angle; // track angle in degrees True
    uint8_t date; // ddmmyy
    float magnetic_variation;
    uint8_t checksum;
} GPRMC_t;

typedef struct {
    
    GPGGA_t GGA;
    GPRMC_t RMC;
} GPS_t;

/* Function Prototypes */
void GPS_Init(GPS_t *);
void sendCommand(const char *);
char read(void);
bool newNMEAreceived(void);
char* lastNMEA(void);

#endif
