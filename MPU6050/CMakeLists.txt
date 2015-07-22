# add the binary tree directory to the search path for
# include files
include_directories (${CMAKE_CURRENT_BINARY_DIR})
include_directories (${CMAKE_SOURCE_DIR}/I2Cdev)

# add the main library
add_library (MPU6050 MPU6050.cpp)

target_link_libraries(MPU6050 I2Cdev)
