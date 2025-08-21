#include <iostream>
#include <vector>

int trapRainWater(const std::vector<int>& heights) {
    int water = 0;

    int left = 0, right = heights.size() - 1;
    int lMax = heights[0], rMax = heights[right];

    while (left < right) {
        if (heights[left] < heights[right]) {
            if (heights[left] < lMax)
                water += lMax - heights[left];
            else
                lMax = heights[left];
            ++left;
        }
        else {
            if (heights[right] < rMax)
                water += rMax - heights[right];
            else
                rMax = heights[right];
            --right;
        }
    }

    return water;
}
