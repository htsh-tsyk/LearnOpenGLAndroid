cmake_minimum_required(VERSION 3.4.1)

add_library( lesson5
             SHARED
             src/main/cpp/lesson5.cpp )

find_library( log-lib
              log )

target_link_libraries( lesson5
                       ${log-lib}
                       android
                       log
                       EGL
                       GLESv2)
