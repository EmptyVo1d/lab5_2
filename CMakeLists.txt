cmake_minimum_required(VERSION 3.23)
project(lab5_2 C)

set(CMAKE_C_STANDARD 99)

add_executable(lab5_2 main.c MyLibrary.h createArr.c AlgQsort.c AlgShaker.c PairInsertionSort.c)
