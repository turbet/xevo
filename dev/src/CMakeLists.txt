cmake_minimum_required(VERSION 2.8)

############ GLM library ##########
set (GLM_INCLUDE_DIR "./libs/glm")
SUBDIRLIST(GLM_INCLUDE_DIRS ${GLM_INCLUDE_DIR})
############

include_directories(. )

#include all source files recursively
file(GLOB_RECURSE XEVO_SRC_FILES "*.cpp")
add_library(xevo STATIC ${XEVO_SRC_FILES})

file(GLOB_RECURSE XEVO_INCLUDE_FILES "*.hpp")
message( STATUS "XEvo includes = " ${XEVO_INCLUDE_FILES} )
message( STATUS "XEvo sources = " ${XEVO_SRC_FILES} )

install(TARGETS xevo DESTINATION ${BASEPATH}/dist/lib)
install(DIRECTORY . DESTINATION ${BASEPATH}/dist/include/xevo FILES_MATCHING PATTERN "*.hpp" PATTERN "*.h")

