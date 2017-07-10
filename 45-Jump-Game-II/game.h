//
// Created by Marvin on 2017/7/10.
//

#ifndef INC_45_JUMP_GAME_II_GAME_H
#define INC_45_JUMP_GAME_II_GAME_H

#include <iostream>
#include <vector>
#include <algorithm>

/*
 * Given an array of non-negative integers, you are initially positioned at the first index of the array.
 * Each element in the array represents your maximum jump length at that position.
 * Your goal is to reach the last index in the minimum number of jumps.
 * For example:
 * Given array A = [2,3,1,1,4], The minimum number of jumps to reach the last
 * index is 2. (Jump 1 step from index 0 to 1, then 3 steps to the last index.)
 */

/*
 * 这道题主要是用贪心算法，只需要扫描一遍就行。从前往后扫描，首先固定一个边界，这个边界相当于
 * 在当前情况下所知道的我能跳转的最远的地方，比如在位置0的值为2，说明最多能跳转两步到达位置2，
 * 设定好边界之后，再去寻找这个范围里面能跳转到的最远的地方，等到把这个范围扫描完了，就执行一次跳转
 * 也就是跳转到最远的地方，不断更新即可。
 *
 * 一开始我还想到了一种方法：就是从尾部向前扫描，每次都寻找最远的那个点，这相当于如果我从尾部往回
 * 跳转，为了保证跳转的次数最少，每次我都尽可能地往远处跳，这也是一种贪心算法，不过这个方法的时间
 * 复杂度不符合要求
 *
 */

class Solution {
public:
    int jump(std::vector<int>& nums) {
        int len = nums.size();
        //跳转步数
        int jump = 0;
        //在哪一个范围内寻找
        int end = 0;
        //当前范围内能跳到的最远的地方
        int des = 0;
        for(int i = 0; i < len - 1; i++) {
            //不断更新当前范围内能跳到的最远的地方
            des = std::max(des, nums[i] + i);
            if(i == end) {
                //扫描到范围的边界开始更新范围
                end = des;
                //范围更新后说明执行了一次跳转
                jump++;
            }
        }
        return jump;
    }

    //这个方法的时间复杂度不符合要求
    int jumpT(std::vector<int>& nums) {
        int len = nums.size();
        int jump = 0;
        int iter = len - 1;
        //iter > 0而不是iter >= 0是为了当iter=0时应该跳出循环，否则jump会多加1
        while(iter > 0) {
            int maxindex = -1;
            //从前往后找，只要找到第一个符合条件的点就可以停止，因为这必然是离当前跳转点最远的点
            //因为跳转是从后往前
            for(int j = 0; j < iter; j++) {
                if(nums[j] >= iter - j) {
                    maxindex = j;
                    break;
                }
            }
            iter = maxindex;
            jump++;
        }
        return jump;
    }
};

#endif //INC_45_JUMP_GAME_II_GAME_H
