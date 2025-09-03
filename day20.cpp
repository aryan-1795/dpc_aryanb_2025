#include <iostream>
#include <vector>
#include <stack>

void sortStackRecursively(std::stack<int>& s) {
    if (s.size() < 2)
        return;
    
    int curr = s.top(), temp;
    do {
        s.pop();
        if (s.top() < curr)
            std::swap(s.top(), curr);
        sortStackRecursively(s);
        temp = s.top();
        s.push(curr);
    }
    while (curr > temp);
}
