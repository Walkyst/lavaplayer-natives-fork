cmake_minimum_required(VERSION 3.10)
project(samplerate C)

if (MSVC)
	set(CMAKE_C_FLAGS_RELEASE "/MT")
else()
	set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fPIC -fdata-sections -ffunction-sections")
endif()

add_definitions(-DHAVE_CONFIG_H=1)

include_directories(.)
include_directories(include)
include_directories(src)
add_library(samplerate STATIC src/samplerate.c src/src_linear.c src/src_sinc.c src/src_zoh.c)
