#include <iostream>
#include <vector>

//Assuming the array is sorted
int findMissingNum_Sorted(const std::vector<int>& arr) {
    int l = 0, r = arr.size() - 1;

    while (l < r) {
        int mid = (l + r) / 2;
        if (arr[mid] == mid + 1)
            l = mid + 1;
        else
            r = mid;
    }
    return arr[l] == l + 1 ? l + 2 : l + 1;
}

//Assuming the array is not sorted
int findMissingNum_Unsorted(const std::vector<int>& arr) {
    long long sum = 0, n = arr.size() + 1;
    for (int num : arr)
        sum += num;
    return n * (n + 1) / 2 - sum;
}

int main() {
    std::cout << findMissingNum_Sorted({1, 2, 4, 5}) << "\n";
    std::cout << findMissingNum_Sorted({2, 3, 4, 5}) << "\n";
    std::cout << findMissingNum_Sorted({1, 2, 3, 4}) << "\n";
    std::cout << findMissingNum_Sorted({1}) << "\n\n";

    std::cout << findMissingNum_Unsorted({1, 2, 4, 5}) << "\n";
    std::cout << findMissingNum_Unsorted({2, 3, 4, 5}) << "\n";
    std::cout << findMissingNum_Unsorted({1, 2, 3, 4}) << "\n";
    std::cout << findMissingNum_Unsorted({1}) << "\n";


    return 0;
}
