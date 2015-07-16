#include <stdio.h>

#include "BMP085.h"
#include "HMC5883L.h"
#include "MPU6050.h"
#include "SSD1308.h"

int main (int argc, char *argv[]) {
    I2Cdev::initialize();
    return 0;
}
