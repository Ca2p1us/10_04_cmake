cmake_minimum_required(VERSION 3.0)

add_executable(my_main main.cpp myfunc.c)

target_link_libraries(my_main m)

find_package(OpenCV REQUIRED)
target_link_libraries(my_main ${OpenCV_LIBS})
