project(Solutions C CXX)

set(HEADER_FILES
        "Arrays/2D_Array.cpp")

set(SOURCE_FILES
        "Arrays/2D_Array.cpp" Arrays/Left_Rotation.cpp Arrays/Minimum_Swaps_2.cpp)

add_library(Solutions STATIC ${SOURCE_FILES} ${HEADER_FILES})