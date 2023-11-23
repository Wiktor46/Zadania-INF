cmake_minimum_required(VERSION 3.26)
project(z26 C)

set(CMAKE_C_STANDARD 11)

add_executable(z26 main.c
        def.c
        prot.c)
