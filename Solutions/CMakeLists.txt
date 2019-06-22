project(Solutions C CXX)

set(HEADER_FILES
        "Arrays/2D_Array_DS/Solution.cpp")

set(SOURCE_FILES
        "Arrays/2D_Array_DS/Solution.cpp")

add_library(Solutions STATIC ${SOURCE_FILES} ${HEADER_FILES})