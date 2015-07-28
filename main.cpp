#include <stdio.h>
#include <unistd.h>

#include "BMP085.h"
#include "HMC5883L.h"
#include "MPU6050.h"
#include "SSD1308.h"

int main (int argc, char *argv[]) {
    I2Cdev::initialize();
    MPU6050 accelgyro ;
    int16_t ax, ay, az;
    int16_t gx, gy, gz;
    if ( accelgyro.testConnection() )
        printf("MPU6050 connection test successful\n") ;
    else {
        fprintf( stderr, "MPU6050 connection test failed! something maybe wrong\n");
        return 1;
    }
    accelgyro.initialize();
    printf("Device ID: %d\n", accelgyro.getDeviceID());
    printf("  ax \t ay \t az \t gx \t gy \t gz:\n");
    while (true) {
        accelgyro.getMotion6(&ax, &ay, &az, &gx, &gy, &gz);
        printf("  %d \t %d \t %d \t %d \t %d \t %d\r", ax, ay, az, gx, gy, gz);
        fflush(stdout);
        usleep(1000);
    }
    return 0;
}
