# add the binary tree directory to the search path for
# include files
include_directories (${CMAKE_CURRENT_BINARY_DIR})
include_directories (${CMAKE_SOURCE_DIR}/I2Cdev)

# add the main library
add_library (BMP085 BMP085.cpp)

target_link_libraries(BMP085 I2Cdev)

install (TARGETS BMP085 DESTINATION bin)
install (FILES BMP085.h DESTINATION include)
