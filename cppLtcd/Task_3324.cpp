#include <iostream>
#include <vector>

/*
Алгоритм посимвольно строит целевую строку.Для каждого символа target начиная с 'a', перебирает буквы алфавита,
добавляя каждую промежуточную строку в результат.Когда текущий символ совпадает с нужным символом target,
фиксирует его и переходит к следующему символу target, сбрасывая счётчик обратно на 'a'.
Это моделирует минимальное количество нажатий клавиш.
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
