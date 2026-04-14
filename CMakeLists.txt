set(TRAIT_NAME "<YOUR TRAIT_NAME HERE>")

cmake_minimum_required(VERSION 3.10)
project(${TRAIT_NAME} LANGUAGES CXX)

add_library(${TRAIT_NAME} SHARED src/trait.cpp)

set_target_properties(${TRAIT_NAME} PROPERTIES
    CXX_VISIBILITY_PRESET default
    POSITION_INDEPENDENT_CODE ON
)
