cmake_minimum_required(VERSION 3.16)

project(orton3cpp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# include(GNUInstallDirs)
# install(TARGETS orton3cpp
#     LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
#     RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
# )

add_executable (collatz  collatz.cpp)
