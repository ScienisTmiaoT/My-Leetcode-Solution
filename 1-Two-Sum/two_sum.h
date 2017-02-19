//
// Created by Marvin on 2017/2/19.
//

#ifndef TWO_SUM_H
#define TWO_SUM_H

#include <vector>
#include <iostream>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::vector<int> result;
        int len = nums.size();
        for(int i = 0; i < len; i++) {
            for(int j = i + 1; j < len; j++) {
                if(nums[i] + nums[j] == target) {
                    result.push_back(i);
                    result.push_back(j);
                    break;
                }
            }
        }
        return result;
    }
};

#endif
