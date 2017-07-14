//
// Created by Marvin on 2017/7/14.
//

#ifndef INC_80_REMOVE_DUPLICATES_FROM_SORTED_ARRAY_II_ARRAY_H
#define INC_80_REMOVE_DUPLICATES_FROM_SORTED_ARRAY_II_ARRAY_H

#include <iostream>
#include <vector>
#include <algorithm>
/*
 * Follow up for "Remove Duplicates":
 * What if duplicates are allowed at most twice?
 * For example,
 * Given sorted array nums = [1,1,1,2,2,3],
 * Your function should return length = 5, with the first five elements of nums
 * being 1, 1, 2, 2 and 3. It doesn't matter what you leave beyond the new length.
 */

/*
 * 这道题一开始的想法就是通过用一个index来表示当前可以插入的位置，用一个flag来表示当前这个数是否
 * 已经插入了两个。不过有一种很巧妙的方法是利用了当前的数列排好了序，因此我们也是按照从小到大的
 * 顺序依次插入的，所以可以通过比较i和index-2位置的数的大小来确定当前是否已经插入了两个相同的数
 */
class Solution {
public:
    //使用flag
    int removeDuplicates(std::vector<int>& nums) {
        int len = nums.size();
        if(len == 0) return 0;
        int insert = 1;
        //flag
        bool two = false;
        for(int i = 1; i < len; i++) {
            if(nums[i] == nums[insert - 1]) {
                if (!two) {
                    nums[insert++] = nums[i];
                    two = true;
                }
            }
            else {
                    nums[insert++] = nums[i];
                    two = false;
                }
        }
        return insert;
    }
    int removeDuplicatesT(std::vector<int>& nums) {
        int len = nums.size();
        int index = 0;
        for(int i = 0; i < len; i++)
            //比较i和index-2来判断是否有两个相同的数已经插入
            if(i < 2 || nums[i] > nums[index - 2]) nums[index++] = nums[i];
        return index;
    }
};
#endif //INC_80_REMOVE_DUPLICATES_FROM_SORTED_ARRAY_II_ARRAY_H
