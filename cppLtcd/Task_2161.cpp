﻿#include <iostream>
#include <vector>

/*
Алгоритм использует три отдельных вектора(less, equal, greater) для разделения элементов по их отношению к pivot.
За один проход по массиву каждый элемент классифицируется в соответствующий вектор. 
Затем три вектора конкатенируются в порядке : less + equal + greater.
*/

class Solution {
public:
    std::vector<int> pivotArray(std::vector<int>& nums, int pivot) {
        std::vector<int> less, greater, equal;
        for (int i : nums) {
            if (pivot > i)
                less.push_back(i);
            else if (pivot == i)
                equal.push_back(i);
            else
                greater.push_back(i);
        }
        less.insert(less.end(), equal.begin(), equal.end());
        less.insert(less.end(), greater.begin(), greater.end());
        return less;
    }
};