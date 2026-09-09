#include <iostream>
#include <vector>
#include <map>

/*
Àëãîðèòì èñïîëüçóåò ñëîâàðü (map) äëÿ ïîäñ÷¸òà êîëè÷åñòâà âõîæäåíèé êàæäîãî ýëåìåíòà.
Çà îäèí ïðîõîä ïî ìàññèâó ñ÷èòàåì ÷àñòîòó êàæäîãî ÷èñëà, çàòåì ïðîõîäèì ïî ìàïå è ñîáèðàåì ýëåìåíòû ñ ÷àñòîòîé 1.
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
