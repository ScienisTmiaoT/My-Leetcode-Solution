//
// Created by Marvin on 2017/2/23.
//

#ifndef INC_31_NEXT_PERMUTATION_NEXT_H
#define INC_31_NEXT_PERMUTATION_NEXT_H

#include <iostream>
#include <vector>
#include <algorithm>

/*
 * 这道题是要按照从小到大的顺序找出下一个排列，解题思路就是从后面往前扫描，用双重循环，
 * 首先固定一个数，然后往前找到一个比当前数小的数，代表这两个数交换之后可能是下一个排列，
 * 不过需要注意，有可能这两个数中间相隔好多个数，如果这两个数中间的数可以交换的话说明
 * 要优先选择让之间的数进行交换，这样才可能尽量小地增加原来的数列，交换完之后要让左边
 * 被交换数之后的数从小到大排序，道理很简单，相当于改变了高位，那么要使得是下一个排列，
 * 必须要让高位数之后的数最小
 */
class Solution {
public:
    void nextPermutation(std::vector<int>& nums) {
        int len = nums.size();
        bool flag = false;
        int lindex = -1;
        int rindex = 0;
        int i = len -1;
        int j = 0;
        for(; i >= 0; i--) {
            for(j = i - 1; j >= 0; j--) {
                /*
                 * 修改索引的两个条件，要么在下一次循环的时候，扫描到的数在
                 * 左边索引数之后，要么两者重合此时要满足右边扫描到的数小于
                 * 右边索引的数，两个条件都要符合左边扫描到的数小于右边扫描到的数
                 */
                if(nums[j] < nums[i] && j > lindex || (nums[j] < nums[i] && j == lindex &&
                        nums[i] < nums[rindex])) {
//                    int temp = nums[j];
//                    nums[j] = nums[i];
//                    nums[i] = temp;
                    flag = true;
                    rindex = i;
                    lindex = j;
                }
            }
        }
        if(flag) {
            //交换两个数
            int temp = nums[lindex];
            nums[lindex] = nums[rindex];
            nums[rindex] = temp;
            //对左边索引的数之后的所有数进行排序
            std::sort(nums.begin() + lindex + 1, nums.end());
        }
        else
            //没有符合条件的排列则按从小到大顺序输出
            std::sort(nums.begin(), nums.end());
        for(int k = 0; k < len; k++) {
            std::cout << nums[k] << " ";
        }
    }
};

#endif //INC_31_NEXT_PERMUTATION_NEXT_H
