//
// Created by Marvin on 2017/2/22.
//

#ifndef INC_15_3SUM_SUM_H
#define INC_15_3SUM_SUM_H

#include <iostream>
#include <vector>
#include <algorithm>

/*
 * use i, j to search from front and use k to search from
 * back, stop when meet correct triple or the triple value
 * is less than 0, which can reduce time.
 */
class Solution {
public:
    std::vector<std::vector<int>> threeSum(std::vector<int>& nums) {
        std::vector<std::vector<int>> result;
        unsigned int len = nums.size();
        std::sort(nums.begin(), nums.end());
        for(unsigned int i = 0; (i < len) && (nums[i] <= 0); i++) {
            if(i != 0 && nums[i] == nums[i - 1])
                continue;
            unsigned int k = len - 1;
            for(unsigned int j = i + 1; j < len; j++) {
                if(j != i + 1 && nums[j] == nums[j - 1])
                    continue;
                for(; (k > j) && (nums[k] >= 0); k--) {
                    if(nums[i] + nums[j] + nums[k] == 0) {
                        std::vector<int> temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[j]);
                        temp.push_back(nums[k]);
                        result.push_back(temp);
                        break;
                    }
                    else if(nums[i] + nums[j] + nums[k] < 0)
                        break;
                }
            }
        }
        return result;
    }
};

#endif //INC_15_3SUM_SUM_H
