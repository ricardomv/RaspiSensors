# add the binary tree directory to the search path for
# include files
include_directories (${CMAKE_CURRENT_BINARY_DIR})

# add the main library
if (BCM2835_FOUND)
    add_library (I2Cdev I2CdevBCM2835.cpp)
else (BCM2835_FOUND)
    add_library (I2Cdev I2CdevLinux.cpp)
endif (BCM2835_FOUND)
