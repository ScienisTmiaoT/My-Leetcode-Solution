//
// Created by Marvin on 2017/7/15.
//

#ifndef INC_81_SEARCH_IN_ROTATED_SORTED_ARRAY_II_ARRAY_H
#define INC_81_SEARCH_IN_ROTATED_SORTED_ARRAY_II_ARRAY_H

#include <iostream>
#include <vector>
#include <algorithm>
/*
 * Follow up for "Search in Rotated Sorted Array":
 * What if duplicates are allowed?
 * Would this affect the run-time complexity? How and why?
 * Suppose an array sorted in ascending order is rotated at some pivot unknown to you beforehand.
 * (i.e., 0 1 2 4 5 6 7 might become 4 5 6 7 0 1 2).
 * Write a function to determine if a given target is in the array.
 * The array may contain duplicates.
 */

/*
 * 这道题和（33. Search in Rotated Sorted Array）的解法是一致的，都是确定连续递增的部分
 * 在哪边，不过因为这道题允许了重复元素的出现，因而增加了一种情况的判断。
 * 比如：｛1,3,1,1,1,1,1｝
 * 上面的数列的中间元素为1，可以发现我们比较最左边的元素1和中间元素1并不能确定左半部分就是递增的，
 * 此时反而是无序的，因此我们单独将left和middle相等的情况拿出来判断，并同时改变left和right
 */
class Solution {
public:
    bool search(std::vector<int>& nums, int target) {
        int len = nums.size();
        if(len == 0) return false;
        int left = 0, right = len - 1;
        int middle = 0;
        while(left <= right) {
            middle = (left + right) / 2;
            if(nums[middle] == target) return true;
            //额外判断特殊情况，遇到无法定位递增部分时，同时改变left和right
            if((nums[left] == nums[middle]) && (nums[middle] == nums[right])) {
                left++;
                right--;
            }
            else if(nums[left] <= nums[middle]) {
                if(target >= nums[left] && target < nums[middle])
                    right = middle - 1;
                else
                    left = middle + 1;
            }
            else if(nums[left] > nums[middle]) {
                if(target > nums[middle] && target <= nums[right])
                    left = middle + 1;
                else
                    right = middle - 1;
            }
        }
        return false;
    }
};
#endif //INC_81_SEARCH_IN_ROTATED_SORTED_ARRAY_II_ARRAY_H
