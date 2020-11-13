cmake_minimum_required(VERSION 3.16)
project(EmployeeManage)

set(CMAKE_CXX_STANDARD 14)

add_library(EmployeeManage WorkerManager.h WorkerManager.cpp worker.h employee.h employee.cpp manager.cpp manager.h boss.cpp boss.h)
add_subdirectory(examples)