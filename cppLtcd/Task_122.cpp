#include <iostream>
#include <vector>

/*
јлгоритм основан на жадном подходе: если цена на следующий день выше текущей,
мы "покупаем" вчера и "продаЄм" сегодн€, фиксиру€ разницу как прибыль.
—уммиру€ все положительные разницы между соседними дн€ми, мы получаем максимальную прибыль.
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