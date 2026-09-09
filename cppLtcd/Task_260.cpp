#include <iostream>
#include <vector>
#include <map>

/*
Алгоритм использует словарь (map) для подсчёта количества вхождений каждого элемента.
За один проход по массиву считаем частоту каждого числа, затем проходим по мапе и собираем элементы с частотой 1.
*/

class Solution {
public:
    std::vector<int> singleNumber(std::vector<int>& nums) {
        std::map<int, int> m;
        std::vector<int> result;
        for (int i : nums) {
            m[i]++;
        }
        for (auto i : m) {
            if (i.second == 1)
                result.push_back(i.first);
        }
        return result;
    }
};