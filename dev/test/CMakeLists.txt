cmake_minimum_required(VERSION 2.8)
enable_testing()
include_directories(. ../src)
set(LIBS ${LIBS} xevo)

file(GLOB_RECURSE XEVO_TEST_FILES "test*.cpp")

# create one test executable per cpp file
foreach (XEVO_TEST_FILE ${XEVO_TEST_FILES})
        get_filename_component(TEST_NAME ${XEVO_TEST_FILE} NAME_WE)
        add_executable(${TEST_NAME} ${XEVO_TEST_FILE})
        target_link_libraries(${TEST_NAME} xevo)
        message( STATUS "add test " ${CMAKE_CURRENT_BINARY_DIR}/${TEST_NAME} )
        add_test(${TEST_NAME} ${CMAKE_CURRENT_BINARY_DIR}/${TEST_NAME})
endforeach(XEVO_TEST_FILE)

