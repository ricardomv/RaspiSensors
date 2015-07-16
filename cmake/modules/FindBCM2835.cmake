# - Try to find bcm2835
# Once done this will define
#  BCM2835_FOUND - System has bcm2835
#  BCM2835_INCLUDE_DIRS - The bcm2835 include directories
#  BCM2835_LIBRARIES - The libraries needed to use bcm2835
#  BCM2835_DEFINITIONS - Compiler switches required for using bcm2835

find_path (BCM2835_INCLUDE_DIR bcm2835.h )
find_library (BCM2835_LIBRARY NAMES bcm2835)

set (BCM2835_LIBRARIES ${BCM2835_LIBRARY} )
set (BCM2835_INCLUDE_DIRS ${BCM2835_INCLUDE_DIR} )

mark_as_advanced (BCM2835_INCLUDE_DIR BCM2835_LIBRARY )
