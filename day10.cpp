#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <algorithm>

std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string>& strs) {
    std::vector<std::vector<std::string>> ans;
    std::unordered_map<std::string, std::pair<bool, int>> um;

    for (int i = 0; i < strs.size(); ++i) {
        std::string s = strs[i];
        std::sort(s.begin(), s.end());
        
        if (!um[s].first) {
            um[s] = {true, ans.size()};
            ans.push_back({});
        }
        ans[um[s].second].push_back(strs[i]);
    }

    return ans;
}
