//
// Created by Marvin on 2017/7/6.
//

#ifndef INC_34_A_RANGE_RANGE_H
#define INC_34_A_RANGE_RANGE_H
#include <iostream>
#include <vector>
#include <algorithm>

/*
 * 这道题主要是在一个从小到大的数列里面搜索一个数所在的范围，返回左右两个索引，解题思路就是
 * 二分查找看看里面是否有这个数，记录索引，然后再从该索引各自往两边二分查找，时间复杂度为2*O(n)，
 * 也就是O(n)
 */

class Solution {
public:
    std::vector<int> searchRange(std::vector<int>& nums, int target) {
        std::vector<int> result;
        int len = nums.size();
        int l = 0;
        int r = len - 1;
        while(l < r) {
            int mid = (l + r) / 2;
            if (nums[mid] == target) {
                l = mid;
                break;
            }
            if(nums[mid] > target)
                r = mid - 1;
            else
                l = mid + 1;
        }
        if(len == 0 || nums[l] != target) {
            result.push_back(-1);
            result.push_back(-1);
            return result;
        }
        int l1 = 0;
        int r1 = l;
        while(l1 <= r1) {
            if(nums[l1] == target) {
                result.push_back(l1);
                break;
            }
            int mid1 = (l1 + r1) / 2;
            if(nums[mid1] == target && nums[mid1 - 1] < target) {
                result.push_back(mid1);
                break;
            }
            //这里使用大于等于号而不是大于号是为了尽量从左边搜索
            if(nums[mid1] >= target)
                r1 = mid1 - 1;
            else
                l1 = mid1 + 1;
        }

        int l2 = l;
        int r2 = len - 1;
        while(l2 <= r2) {
            if(nums[r2] == target) {
                result.push_back(r2);
                break;
            }
            int mid2 = (l2 + r2) / 2;
            if (nums[mid2] == target && nums[mid2 + 1] > target) {
                result.push_back(mid2);
                break;
            }
            //这里使用大于号而不是大于等于号是为了尽量从右边搜索
            if (nums[mid2] > target)
                r2 = mid2 - 1;
            else
                l2 = mid2 + 1;
        }
        return result;
    }
};
#endif //INC_34_A_RANGE_RANGE_H
