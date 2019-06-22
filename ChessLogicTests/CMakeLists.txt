project(ChessLogicTests)

add_subdirectory(googletest)

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(ChessLogicTests
        ChessLogicTests.cpp)

target_link_libraries(ChessLogicTests gtest gtest_main)
target_link_libraries(ChessLogicTests ChessLogic)

add_test(ChessLogicTests ChessLogicTests)
