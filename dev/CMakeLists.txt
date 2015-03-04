cmake_minimum_required(VERSION 2.8)
project(XEvo)

#enable testing using ctest. use 'check' target to output failed tests on standard output
#instead of 'test' target which does not
enable_testing()
add_custom_target(test_verbose_on_fail COMMAND ${CMAKE_CTEST_COMMAND}
        --force-new-ctest-process --output-on-failure)
add_custom_target(test_verbose COMMAND ${CMAKE_CTEST_COMMAND}
        --force-new-ctest-process --extra-verbose)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wno-long-long -pedantic")

# BASEPATH
SET(BASEPATH "${CMAKE_SOURCE_DIR}")
message( STATUS "XEvo root directory = " ${BASEPATH} )

#SUBDIRLIST macro definition
MACRO(SUBDIRLIST result curdir)
  FILE(GLOB children RELATIVE ${curdir} ${curdir}/*)
  SET(dirlist "")
  FOREACH(child ${children})
    IF(IS_DIRECTORY ${curdir}/${child})
        LIST(APPEND dirlist ${child})
    ENDIF()
  ENDFOREACH()
  SET(${result} ${dirlist})
ENDMACRO()

FILE(REMOVE_RECURSE dist)

add_subdirectory( src )
add_subdirectory( test )

