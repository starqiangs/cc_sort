#pragma once

#include <vector>

class Sort
{
public:
    Sort(std::vector<int> &vec) : _vec(vec){};
    void BuddleSort();
    void QuickSort(int left, int right);
    void Print();

private:
    std::vector<int> &_vec;

private:
    int partition(int start, int end);

    template <typename T>
    void MySwap(T &a, T &b)
    {
        T temp = a;
        a = b;
        b = temp;
    }
};