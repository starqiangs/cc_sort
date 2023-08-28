#include <iostream>
#include <vector>

#include "Sort.h"

int main()
{
    std::vector<int> arr = {10, 9, 2, 3, 52, 2, 12, 42, 23};
    Sort sort(arr);
    std::cout << "未排序前：" << std::endl;
    sort.Print();
    sort.QuickSort(0, arr.size() - 1);
    std::cout << "排序后：" << std::endl;
    sort.Print();

    return 0;
}