# add the binary tree directory to the search path for
# include files
include_directories (${CMAKE_CURRENT_BINARY_DIR})
include_directories (${CMAKE_SOURCE_DIR}/I2Cdev)

# add the main library
add_library (MPU6050 MPU6050.cpp ${CMAKE_CURRENT_BINARY_DIR}/MPU6050.h)

target_link_libraries(MPU6050 I2Cdev)

install (TARGETS MPU6050 DESTINATION bin)
install (FILES MPU6050.h DESTINATION include)
