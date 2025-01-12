# CMake phiên bản tối thiểu
cmake_minimum_required(VERSION 3.10)

# Tên project
project(Problem_Solve)

# C++ tiêu chuẩn sử dụng
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Thêm file thực thi
add_executable(MyExecutable Two_Sum.cpp)

