cmake_minimum_required(VERSION 3.10)

Include(FetchContent)

project("TEIT24A-Inf2-Probeklausur")

set(CMAKE_COMPILE_WARNING_AS_ERROR OFF)
set(CMAKE_CXX_STANDARD 23)

FetchContent_Declare(
  Catch2
  SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/praxis/testing/Catch2"
  #GIT_TAG        v3.8.1 # or a later release
)
FetchContent_MakeAvailable(Catch2)
list(APPEND CMAKE_MODULE_PATH ${catch2_SOURCE_DIR}/extras)

include(CTest)
include(Catch)

add_subdirectory(praxis)

cmake_path(SET GITIGNORE_FILE NORMALIZE "${CMAKE_BINARY_DIR}/.gitignore")
file(WRITE ${GITIGNORE_FILE} "*")
