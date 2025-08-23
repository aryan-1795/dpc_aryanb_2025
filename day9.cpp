#include <iostream>
#include <vector>

std::string longestCommonPrefix(const std::vector<std::string>& words) {
    for (int i = 0; true; ++i) {
        char curr = words[0][i];

        for (const std::string& word : words) {
            if (i == word.length() || word[i] != curr) {
                return word.substr(0, i);
            }
        }
    }

    return "";
}
