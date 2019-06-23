project(Challenges C CXX)

add_subdirectory(googletest)

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(Challenges
        "Arrays/2D_Array.cpp" Arrays/Left_Rotation.cpp Arrays/Minimum_Swaps_2.cpp)

target_link_libraries(Challenges gtest gtest_main)
target_link_libraries(Challenges Solutions)

file(GLOB MY_FILES "TestFiles/*.txt")
file(COPY ${MY_FILES} DESTINATION ${CMAKE_CURRENT_BINARY_DIR})

add_test(Challenges Challenges)
