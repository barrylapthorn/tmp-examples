cmake_minimum_required(VERSION 3.22)
project(tmp_examples)

set(CMAKE_CXX_STANDARD 20)

Include(FetchContent)

FetchContent_Declare(
        Catch2
        GIT_REPOSITORY https://github.com/catchorg/Catch2.git
        GIT_TAG        v3.0.1 # or a later release
)

FetchContent_MakeAvailable(Catch2)

add_executable(tmp_examples tests.cpp fibonacci.h tuple_reverse.h tuple_print.h custom_vector.h)
target_link_libraries(tmp_examples PRIVATE Catch2::Catch2WithMain)