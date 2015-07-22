cmake_minimum_required (VERSION 2.6)
project (RasPiTesting)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/modules/")

find_package(BCM2835 REQUIRED)
include_directories(${BCM2835_INCLUDE_DIRS})
set(LIBS ${LIBS} ${BCM2835_LIBRARIES})

add_subdirectory (I2Cdev)
add_subdirectory (BMP085)
add_subdirectory (HMC5883L)
add_subdirectory (MPU6050)
add_subdirectory (SSD1308)

include_directories (${CMAKE_SOURCE_DIR}/I2Cdev)
include_directories (${CMAKE_SOURCE_DIR}/BMP085)
include_directories (${CMAKE_SOURCE_DIR}/HMC5883L)
include_directories (${CMAKE_SOURCE_DIR}/MPU6050)
include_directories (${CMAKE_SOURCE_DIR}/SSD1308)

add_executable (raspitest main.cpp)

target_link_libraries(raspitest I2Cdev BMP085 HMC5883L MPU6050 SSD1308 ${LIBS})

install (TARGETS raspitest DESTINATION bin)
