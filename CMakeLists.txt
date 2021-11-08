cmake_minimum_required(VERSION 3.20)
project(HW3)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(HW3
        main.cpp
        Person.cpp
        Person.h Employee.cpp Employee.h Student.cpp Student.h GradStudent.cpp GradStudent.h)
