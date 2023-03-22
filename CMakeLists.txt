cmake_minimum_required(VERSION 3.5)

project(Veg)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(vendor/libpqxx)

# VEG
include(FetchContent)
FetchContent_Declare(cpr GIT_REPOSITORY https://github.com/libcpr/cpr.git
                         GIT_TAG 871ed52d350214a034f6ef8a3b8f51c5ce1bd400) # The commit hash for 1.9.0. Replace with the latest from: https://github.com/libcpr/cpr/releases
FetchContent_MakeAvailable(cpr)

add_executable(veg src/main.cpp)
target_link_libraries(veg PRIVATE cpr::cpr pqxx)
target_include_directories(veg PRIVATE src vendor/libpqxx/include)