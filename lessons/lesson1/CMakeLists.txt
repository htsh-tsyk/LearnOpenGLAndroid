cmake_minimum_required(VERSION 3.4.1)

add_library( lesson1
             SHARED
             src/main/cpp/lesson1.cpp )

find_library( log-lib
              log )

target_link_libraries( lesson1
                       ${log-lib}
                       android
                       log
                       EGL
                       GLESv2)
