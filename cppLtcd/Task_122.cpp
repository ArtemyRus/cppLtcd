#include <iostream>
#include <vector>

/*
Àëãîðèòì îñíîâàí íà æàäíîì ïîäõîäå: åñëè öåíà íà ñëåäóþùèé äåíü âûøå òåêóùåé,
ìû "ïîêóïàåì" â÷åðà è "ïðîäà¸ì" ñåãîäíÿ, ôèêñèðóÿ ðàçíèöó êàê ïðèáûëü.
Ñóììèðóÿ âñå ïîëîæèòåëüíûå ðàçíèöû ìåæäó ñîñåäíèìè äíÿìè, ìû ïîëó÷àåì ìàêñèìàëüíóþ ïðèáûëü.
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
