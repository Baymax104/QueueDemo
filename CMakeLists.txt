cmake_minimum_required(VERSION 3.17)
project(Queue C)

set(CMAKE_C_STANDARD 11)

add_executable(Queue main.c LinkedQueue.h LinkedQueue.c ArrayQueue.h ArrayQueue.c)