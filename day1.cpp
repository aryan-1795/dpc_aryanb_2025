#include <iostream>
#include <vector>

void sortArray(std::vector<int>& arr) {
    int cnt[] = {0, 0, 0};

    for (int num : arr)
        cnt[num]++;
    
    for (int& num : arr)
        num = cnt[0]-- > 0 ? 0 : (cnt[1]-- > 0 ? 1 : 2);
}
