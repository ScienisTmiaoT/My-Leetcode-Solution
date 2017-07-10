//
// Created by Marvin on 2017/7/9.
//

#ifndef INC_42_TRAPPING_RAIN_WATER_RAIN_H
#define INC_42_TRAPPING_RAIN_WATER_RAIN_H
#include <iostream>
#include <vector>
#include <algorithm>

/*
 * Given n non-negative integers representing an elevation map where the width
 * of each bar is 1, compute how much water it is able to trap after raining.
 * For example, Given [0,1,0,2,1,0,1,3,2,1,2,1], return 6.
 */

/*
 * 这道题的解题思路也比较巧妙，关键在于计算每一个单元累积的水量，这时候就要维护两个指针，分别
 * 记录当前左右两边最大的高度，具体的思路：从左右两边同时扫描，先比较左右两边的高度，从低的一侧
 * 开始，因为这相当于维护了一面高的墙，那么盛水的多少就取决于低的那一面，然后继续比较当前维护的
 * 最大指针和当前的高度，如果最大指针更大，说明可以将两者的差值加到总水量里面，否则水会溢出，不能
 * 加进去
 */

class Solution {
public:
    int trap(std::vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int maxleft = 0;
        int maxright = 0;
        int water = 0;
        while(left <= right) {
            if(height[left] <= height[right]) {
                if(height[left] >= maxleft)
                    maxleft = height[left];
                else
                   water += maxleft - height[left];
                left++;
            }
            else {
                if(height[right] >= maxright)
                    maxright = height[right];
                else
                    water += maxright - height[right];
                right--;
            }
        }
        return water;
    }
};
#endif //INC_42_TRAPPING_RAIN_WATER_RAIN_H
