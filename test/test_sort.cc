#include <vector>
#include <gtest/gtest.h>

#include "Sort.h"

class SortTest : public ::testing::Test
{
protected:
    void SetUp() override {}
    void TearDown() override {}
};

TEST_F(SortTest, TestBuddleSort)
{
    std::vector<int> input = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
    std::vector<int> expected = {1, 1, 2, 3, 3, 4, 5, 5, 5, 6, 9};

    Sort sorter(input);
    sorter.BuddleSort();

    ASSERT_EQ(input, expected);
}

TEST_F(SortTest, TestQuickSort)
{
    std::vector<int> input = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
    std::vector<int> expected = {1, 1, 2, 3, 3, 4, 5, 5, 5, 6, 9};

    Sort sorter(input);
    sorter.QuickSort(0, input.size() - 1);

    ASSERT_EQ(input, expected);
}