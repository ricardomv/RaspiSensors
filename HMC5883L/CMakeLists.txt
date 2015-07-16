# add the binary tree directory to the search path for
# include files
include_directories (${CMAKE_CURRENT_BINARY_DIR})
include_directories(${CMAKE_SOURCE_DIR}/I2Cdev)

# add the main library
add_library (HMC5883L HMC5883L.cpp ${CMAKE_CURRENT_BINARY_DIR}/HMC5883L.h)

target_link_libraries(HMC5883L I2Cdev)

install (TARGETS HMC5883L DESTINATION bin)
install (FILES HMC5883L.h DESTINATION include)
