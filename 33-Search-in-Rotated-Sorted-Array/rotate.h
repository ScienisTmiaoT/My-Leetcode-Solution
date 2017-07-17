//
// Created by Marvin on 2017/7/6.
//

#ifndef INC_33_ROTATED_ARRAY_ROTATE_H
#define INC_33_ROTATED_ARRAY_ROTATE_H
#include <iostream>
#include <vector>
#include <algorithm>

/*
 * 这道题大概意思就是要在一个被循环移位的数组中找到一个数，原始数组是按照从小到大的顺序排列的，
 * 那么移位之后的数组分成两部分，其中一部分必定比另一部分的数都大。所以有两种方法，一种是直接搜索，
 * 另一种是二分查找，注意二分查找的技巧，在这里可以发现一个规律，假设第一次取中间的数，那么中间的
 * 数两边必定有一边的数是按照从小到大的顺序排列的，所以可以先用条件定位到这一部分进行查找，那么
 * 不符合条件的必定要到另一个部分进行查找
 */

class Solution {
public:
    int searchT(std::vector<int>& nums, int target) {
        for(int i = 0; i < nums.size(); i++)
            if(nums[i] == target)
                return i;
        return -1;
    }

    int search(std::vector<int>& nums, int target) {
        int len = nums.size();
        if(len == 0)
            return -1;
        int l = 0;
        int r = len -1;
        while(l < r) {
            int mid = (l + r) / 2;
            if(target == nums[mid])
                return mid;
            //注意这个等号非常重要，这是为了定位从小到大排列的那一部分在左边还是右边
            //例如：4 5 6 7 8 9 1 2 3，中间的数为8，此时从小到大的部分在8的左边
            //若是：7 8 9 1 2 3 4 5 6，中间的数是2，此时从小到大的部分在2的右边
            if(nums[l] <= nums[mid]) {
                if (target >= nums[l] && target < nums[mid])
                    r = mid - 1;
                else
                    l = mid + 1;
            }
            else {
                if(target > nums[mid] && target <= nums[r])
                    l = mid + 1;
                else
                    r = mid - 1;
            }

        }
        return target == nums[r] ? r : -1;
    }
};

#endif //INC_33_ROTATED_ARRAY_ROTATE_H
