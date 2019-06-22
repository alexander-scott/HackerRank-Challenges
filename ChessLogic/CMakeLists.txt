project(ChessLogic)

set(HEADER_FILES
        ChessBoard.h)

set(SOURCE_FILES
        ChessBoard.cpp )

add_library(ChessLogic STATIC ${SOURCE_FILES} ${HEADER_FILES})