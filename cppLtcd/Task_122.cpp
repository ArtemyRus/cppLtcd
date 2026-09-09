#include <iostream>
#include <vector>

/*
Алгоритм основан на жадном подходе: если цена на следующий день выше текущей, 
мы "покупаем" вчера и "продаём" сегодня, фиксируя разницу как прибыль. 
Суммируя все положительные разницы между соседними днями, мы получаем максимальную прибыль.
*/

class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        int profit = 0;
        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] > prices[i - 1]) {
                profit += prices[i] - prices[i - 1];
            }
        }
        return profit;
    }
};
