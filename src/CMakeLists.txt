set(SRC_LIST main.cc Sort.cc)

add_executable(sort ${SRC_LIST})

add_library(mysort ${SRC_LIST})