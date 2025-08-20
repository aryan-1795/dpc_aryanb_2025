#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

std::vector<std::vector<int>> getZeroSumSubarrays(std::vector<int>&& arr) {
    std::vector<std::vector<int>> ans;
    std::unordered_map<int, std::vector<int>> um;
    
    int prefixSum = 0;
    um[0].push_back(-1);
    for (int i = 0; i < arr.size(); ++i) {
        prefixSum += arr[i];
        for (const auto& index : um[prefixSum]) {
            ans.push_back({index + 1, i});
        }
        um[prefixSum].push_back(i);
    }
    
    return ans;
}
