cmake_minimum_required(VERSION 3.4.1)

add_library( lesson2
             SHARED
             src/main/cpp/lesson2.cpp )

find_library( log-lib
              log )

target_link_libraries( lesson2
                       ${log-lib}
                       android
                       log
                       EGL
                       GLESv2)
