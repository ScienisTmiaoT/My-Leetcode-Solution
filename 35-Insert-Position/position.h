//
// Created by Marvin on 2017/7/6.
//

#ifndef INC_35_INSERT_POSITION_POSITION_H
#define INC_35_INSERT_POSITION_POSITION_H
#include <iostream>
#include <vector>
#include <algorithm>

/*
 * 这道题是要在一个有序数组中找一个数，如果没找到就返回应该插入的位置，思路很简单，除了直接搜索
 * 就是使用二分查找
 */

class Solution {
public:
    int searchInsert(std::vector<int>& nums, int target) {
        int len = nums.size();
        int l = 0;
        int r = len - 1;
        //这里使用了尽量往左边查找的思路
        while(l < r) {
            int mid = (l + r) / 2;
            if(nums[mid] < target)
                l = mid + 1;
            else
                r = mid;
        }
        if(nums[l] >= target)
            return l;
        else
            return l+1;
    }
};
#endif //INC_35_INSERT_POSITION_POSITION_H
