#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>

std::string reverseWords(const std::string& s) {
    std::string ans;
    std::stringstream ss;

    for (char c : s) {
        if (c == ' ') {
            std::string temp = ss.str();
            std::reverse(temp.begin(), temp.end());
            if (temp.length()) {
                ans += temp;
                ans += ' ';
            }
            ss.str("");
            ss.clear();
        }
        else
            ss << c;
    }
    std::string temp = ss.str();
    std::reverse(temp.begin(), temp.end());
    if (temp.length()) {
        ans += temp;
        ans += ' ';
    }
    if (ans.length())
        ans.pop_back();
    std::reverse(ans.begin(), ans.end());
    return ans;
}
