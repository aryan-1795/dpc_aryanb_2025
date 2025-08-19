#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> getLeaderElements(std::vector<int>&& arr) {
    std::vector<int> ans;
    int leader = arr[arr.size() - 1];
    ans.push_back(leader);

    for (int i = arr.size() - 1; i > -1; --i) {
        if (arr[i] > leader) {
            leader = arr[i];
            ans.push_back(leader);
        }
    }

    std::reverse(ans.begin(), ans.end());
    
    return ans;
}
