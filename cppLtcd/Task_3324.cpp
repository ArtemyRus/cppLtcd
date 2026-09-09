#include <iostream>
#include <vector>

/*
Àëãîðèòì ïîñèìâîëüíî ñòðîèò öåëåâóþ ñòðîêó.Äëÿ êàæäîãî ñèìâîëà target íà÷èíàÿ ñ 'a', ïåðåáèðàåò áóêâû àëôàâèòà,
äîáàâëÿÿ êàæäóþ ïðîìåæóòî÷íóþ ñòðîêó â ðåçóëüòàò.Êîãäà òåêóùèé ñèìâîë ñîâïàäàåò ñ íóæíûì ñèìâîëîì target,
ôèêñèðóåò åãî è ïåðåõîäèò ê ñëåäóþùåìó ñèìâîëó target, ñáðàñûâàÿ ñ÷¸ò÷èê îáðàòíî íà 'a'.
Ýòî ìîäåëèðóåò ìèíèìàëüíîå êîëè÷åñòâî íàæàòèé êëàâèø.
*/

class Solution {
public:
    std::vector<std::string> stringSequence(std::string target) {
        std::vector<std::string> result;
        std::string s = "";
        int i = 0;
        for (char c = 'a'; i < target.size(); c++)
        {
            result.push_back(s + c);
            if (c == target[i]) {
                s += c;
                i++;
                c = 'a' - 1;
            }
        }
        return result;
    }
};
