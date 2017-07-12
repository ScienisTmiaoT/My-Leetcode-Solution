//
// Created by Marvin on 2017/7/12.
//

#ifndef INC_75_SORT_COLORS_COLOR_H
#define INC_75_SORT_COLORS_COLOR_H

#include <iostream>
#include <vector>
#include <algorithm>

/*
 * Given an array with n objects colored red, white or blue, sort them so that
 * objects of the same color are adjacent, with the colors in the order red,
 * white and blue. Here, we will use the integers 0, 1, and 2 to represent the
 * color red, white, and blue respectively.
 * Note:You are not suppose to use the library's sort function for this problem.
 */

/*
 * 解题思路是扫描两次，各自更新0和1，剩下就是2
 * 还有两种只扫描一次的方法，第一种是，每次遇到0，按照2,1,0的顺序写一遍，相当于更新位置以及记录
 * 之前的数据，遇到1则按照2,1的顺序写入，遇到2只需要写入2。
 * 另一种方法是将0和2往两边写，1则会被挤到中间
 */

class Solution {
public:
    void sortColors(std::vector<int>& nums) {
        tool(nums, tool(nums, 0, 0), 1);
    }

    //按照顺序写入
    void sortColorsO(std::vector<int>& nums) {
        int len = nums.size();
        int zero = -1, one = -1, two = -1;
        for(int i = 0; i < len; i++) {
            if(nums[i] == 0) {
                //必须按照顺序写入，相当于将之前的数据往后移动
                nums[++two] = 2;
                nums[++one] = 1;
                nums[++zero] = 0;
            }
            else if(nums[i] == 1) {
                nums[++two] = 2;
                nums[++one] = 1;
            }
            else
                nums[++two] = 2;
        }
    }

    //将1和2往两边挤
    void sortColorsT(std::vector<int>& nums) {
        int len = nums.size();
        int zero = 0, two = len - 1;
        for(int i = zero; i <= two; i++) {
            //这里交换之后并不改变i的值是因为，可以确保交换之后在i位置的值一定不是0
            //因为如果一开始遇到0就会将zero移动到非零的位置
            if(nums[i] == 0) std::swap(nums[zero++], nums[i]);
                //这里交换之后必须将i减一，因为交换到i位置的值可能还是2，所以需要再次判断
                //因为下一次循环i++刚好回到了同样的位置
            else if(nums[i] == 2) std::swap(nums[two--], nums[i--]);
        }
    }

private:
    int tool(std::vector<int>& nums, int index, int value) {
        int len = nums.size();
        for(int i = len - 1; i >= index; i--) {
            while(nums[index] == value) index++;
            if(nums[i] == value && i > index) std::swap(nums[i], nums[index]);
        }
        return index;
    }
};
#endif //INC_75_SORT_COLORS_COLOR_H
