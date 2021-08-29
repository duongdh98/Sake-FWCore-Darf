# The following four lines of boilerplate have to be in your project's CMakeLists
# in this exact order for cmake to work correctly
cmake_minimum_required(VERSION 3.5)

include($ENV{IDF_PATH}/tools/cmake/project.cmake)

project(Sake-FWCore-Draf)

add_subdirectory(../bsp/driver/alerr)
add_subdirectory(../bsp/driver/gpio)

target_link_libraries( 
    ${PROJECT_NAME} 
    alerr 
    gpio_bsp
)
