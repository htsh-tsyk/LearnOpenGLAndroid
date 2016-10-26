cmake_minimum_required(VERSION 3.4.1)

add_library( lesson4
             SHARED
             src/main/cpp/lesson4.cpp )

find_library( log-lib
              log )

target_link_libraries( lesson4
                       ${log-lib}
                       android
                       log
                       EGL
                       GLESv2)
