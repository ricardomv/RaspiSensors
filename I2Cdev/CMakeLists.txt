# add the binary tree directory to the search path for
# include files
include_directories (${CMAKE_CURRENT_BINARY_DIR})

# add the main library
add_library (I2Cdev I2Cdev.cpp)
