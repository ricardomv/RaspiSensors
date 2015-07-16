# add the binary tree directory to the search path for
# include files
include_directories (${CMAKE_CURRENT_BINARY_DIR})
include_directories (${CMAKE_SOURCE_DIR}/I2Cdev)

# add the main library
add_library (SSD1308 SSD1308.cpp ${CMAKE_CURRENT_BINARY_DIR}/SSD1308.h)

target_link_libraries(SSD1308 I2Cdev)

install (TARGETS SSD1308 DESTINATION bin)
install (FILES SSD1308.h DESTINATION include)
