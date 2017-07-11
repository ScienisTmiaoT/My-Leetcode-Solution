//
// Created by Marvin on 2017/7/11.
//

#ifndef INC_55_JUMP_GAME_GAME_H
#define INC_55_JUMP_GAME_GAME_H

#include <iostream>
#include <vector>
#include <algorithm>

/*
 * Given an array of non-negative integers, you are initially positioned at the first index of the array.
 * Each element in the array represents your maximum jump length at that position.
 * Determine if you are able to reach the last index.
 * For example:
 * A = [2,3,1,1,4], return true.
 * A = [3,2,1,0,4], return false.
 */

/*
 * 这道题的解题思路和（45. Jump Game II）是一样的，也是利用贪心算法，每次记录当前的临界点，和在
 * 临界点范围内能到达的最远位置，然后不断更新临界点，最后判断临界点是否能到达末尾
 */

class Solution {
public:
    bool canJump(std::vector<int>& nums) {
        int len = nums.size();
        if(len == 0)
            return false;
        int end = nums[0];
        int maxend = nums[0];
        int i = 0;
        for(; i < len - 1 && i <= end; i++) {
            maxend = std::max(maxend, i + nums[i]);
            if(i == end)
                end = maxend;
        }
        if(end >= len - 1)
            return  true;
        else
            return false;
    }
};
#endif //INC_55_JUMP_GAME_GAME_H
