set(TEST_SRC_LIST test_main.cc test_sort.cc)

add_executable(test_main ${TEST_SRC_LIST})

target_link_libraries(test_main PRIVATE ${GTEST_BOTH_LIBRARIES} mysort)