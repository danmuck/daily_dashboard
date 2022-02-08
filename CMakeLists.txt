cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB_RECURSE SRC_FILES src/*.cpp)

project(daily_dashboard VERSION 1.0)
add_executable(run_me ${SRC_FILES})
target_include_directories(run_me PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

# Requests
include(FetchContent)
FetchContent_Declare(cpr GIT_REPOSITORY https://github.com/libcpr/cpr.git
GIT_TAG beb9e98806bb84bcc130a2cebfbcbbc6ce62b335) # The commit hash for 1.7.2. Replace with the latest from: https://github.com/libcpr/cpr/releases
FetchContent_MakeAvailable(cpr)
target_link_libraries(run_me PRIVATE cpr::cpr)


##### how to add library manually
# add_subdirectory(lib_name)
#
# Put this into its own lib_name directory and add line above
#
# add_library(lib_name STATIC lib_path/main.cpp)
# target_include_directories(run_me PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/lib_name/include)
#####
