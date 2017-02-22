//
// Created by Marvin on 2017/2/22.
//

#ifndef INC_11_CONTAINER_WITH_MOST_WATER_CONTAINER_H
#define INC_11_CONTAINER_WITH_MOST_WATER_CONTAINER_H

#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    int maxArea(std::vector<int>& height) {
        int start = 0;
        int end = height.size() - 1;
        int result = INT_MIN;
        while(start <= end) {
            int area = std::min(height[start], height[end]) * (end - start);
            result = std::max(area, result);
            if(height[start] <= height[end])
                start++;
            else
                end--;
        }
        return result;
    }
};

#endif //INC_11_CONTAINER_WITH_MOST_WATER_CONTAINER_H
