#include <iostream>
#include <vector>

int findDuplicate(const std::vector<int>& arr) {
    int slow = arr[0], fast = arr[0];

    while (true) {
        slow = arr[slow];
        fast = arr[arr[fast]];

        if (slow == fast) {
            slow = arr[0];
            while (slow != fast) {
                slow = arr[slow];
                fast = arr[fast];
            }
            return slow;
        }
    }

    return -1;
}

int main() {
    std::cout << findDuplicate({1, 3, 4, 2, 2}) << "\n";
    std::cout << findDuplicate({3, 1, 3, 4, 2}) << "\n";
    std::cout << findDuplicate({1, 1}) << "\n";
    std::cout << findDuplicate({1, 4, 4, 2, 3}) << "\n\n";

    return 0;
}
