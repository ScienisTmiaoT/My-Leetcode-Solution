//
// Created by Marvin on 2017/2/22.
//

#ifndef INC_16_3SUM_CLOSEST_SUM_H
#define INC_16_3SUM_CLOSEST_SUM_H

#include <iostream>
#include <vector>
#include <algorithm>

/*
 * use j, k from front and back to close the target, if the current
 * sum is great than target then k--, else j++, which is called
 * close from both sides
 */
class Solution {
public:
    int threeSumClosest(std::vector<int>& nums, int target) {
        std::sort(nums.begin(), nums.end());
        int len = nums.size();
        int mdis = INT_MAX;
        int sum = 0;
        for(int i = 0; i < len; i++) {
            int j = i + 1;
            int k = len - 1;
            while(j < k) {
                int s = nums[i] + nums[j] + nums[k];
                int dis = std::abs(target - s);
                if(dis < mdis) {
                    mdis = dis;
                    sum = s;
                }
                if(s < target)
                    j++;
                else
                    k--;
            }
        }
        return sum;
    }
};

#endif //INC_16_3SUM_CLOSEST_SUM_H
