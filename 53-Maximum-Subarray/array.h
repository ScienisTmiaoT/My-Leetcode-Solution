//
// Created by Marvin on 2017/7/10.
//

#ifndef INC_53_MAXIMUM_SUBARRAY_ARRAY_H
#define INC_53_MAXIMUM_SUBARRAY_ARRAY_H

#include <iostream>
#include <vector>
#include <algorithm>

/*
 * Find the contiguous subarray within an array (containing at least one number) which has the largest sum.
 * For example, given the array [-2,1,-3,4,-1,2,1,-5,4],
 * the contiguous subarray [4,-1,2,1] has the largest sum = 6.
 */

/*
 * 这道题的解题思路是动态规划，主要思想就是维护一个连续序列的和S[i-1]，那么S[i]只可能来自
 * S[i-1]+A[i]和A[i]，因为必须保持连续。再维护一个全局最大的和Sum，不断扫描更新就可以。
 */

class Solution {
public:
    int maxSubArray(std::vector<int>& nums) {
        int n = nums.size();
        //目前全局最大的和，初始化用数组首元素，防止数组的元素值太小
        int maxsum = nums[0];
        //当前序列最大的和
        int sum = 0;
        for(int i = 0; i < n; i++) {
            sum += nums[i];
            sum = std::max(sum, nums[i]);
            maxsum = std::max(maxsum, sum);
        }
        return maxsum;
    }
};

#endif //INC_53_MAXIMUM_SUBARRAY_ARRAY_H
