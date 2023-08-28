#include <iostream>

#include "Sort.h"

void Sort::BuddleSort()
{
    for (int i = 0; i < _vec.size(); i++)
    {
        for (int j = i + 1; j < _vec.size(); j++)
        {
            if (_vec[i] > _vec[j])
            {
                MySwap<int>(_vec[i], _vec[j]);
            }
        }
    }
}

int Sort::partition(int start, int end)
{
    int value = _vec[start];
    int start_index = start;
    int end_index = end;
    while (start_index < end_index)
    {
        while (start_index < end_index && _vec[end_index] >= value)
        {
            end_index--;
        }
        _vec[start_index] = _vec[end_index];
        while (start_index < end_index && _vec[start_index] <= value)
        {
            start_index++;
        }
        _vec[end_index] = _vec[start_index];
    }
    _vec[start_index] = value;
    return start_index;
}

void Sort::QuickSort(int left, int right)
{
    if (left >= right)
    {
        return;
    }
    int base_index = partition(left, right);
    QuickSort(left, base_index - 1);
    QuickSort(base_index + 1, right);
}

void Sort::Print()
{
    for (auto num : _vec)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}