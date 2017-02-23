//
// Created by Marvin on 2017/2/23.
//

#ifndef INC_18_4SUM_SUM_H
#define INC_18_4SUM_SUM_H

#include <iostream>
#include <vector>
#include <algorithm>

/*
 * use close to both sides method, pay attention to reduce the same quadruplets
 */

class Solution {
public:
    std::vector<std::vector<int>> fourSum(std::vector<int>& nums, int target) {
        std::vector<std::vector<int>> result;
        int len = nums.size();
        std::sort(nums.begin(), nums.end());
        for(int i = 0; i < len; i++) {
            // reduce same quadruplets
            if(i != 0 && nums[i] == nums[i - 1])
                continue;
            for(int j = i + 1; j < len; j++) {
                // reduce same quadruplets
                if(j != i + 1 && nums[j] == nums[j - 1])
                    continue;
                int k = j + 1;
                int p = len - 1;
                while(k < p) {
                    int sum = nums[i] + nums[j] + nums[k] + nums[p];
                    if(sum == target) {
                        std::vector<int> temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[j]);
                        temp.push_back(nums[k]);
                        temp.push_back(nums[p]);
                        result.push_back(temp);
                        k++;
                        p--;
                        // reduce same quadruplets
                        while(nums[k] == nums[k-1])
                            k++;
                        while(nums[p] == nums[p+1])
                            p--;
                    }
                    else if(sum < target)
                        k++;
                    else
                        p--;
                }
            }
        }
        return result;
    }
};

#endif //INC_18_4SUM_SUM_H
