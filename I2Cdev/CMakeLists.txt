# add the binary tree directory to the search path for
# include files
include_directories (${CMAKE_CURRENT_BINARY_DIR})

# add the main library
add_library (I2Cdev I2Cdev.cpp ${CMAKE_CURRENT_BINARY_DIR}/I2Cdev.h)

install (TARGETS I2Cdev DESTINATION bin)
install (FILES I2Cdev.h DESTINATION include)
