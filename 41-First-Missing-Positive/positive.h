//
// Created by Marvin on 2017/7/9.
//

#ifndef INC_41_FIRST_MISSING_POSITIVE_POSITIVE_H
#define INC_41_FIRST_MISSING_POSITIVE_POSITIVE_H
#include <iostream>
#include <vector>
#include <algorithm>

/*
 * Given an unsorted integer array, find the first missing positive integer.
 * For example, Given [1,2,0] return 3, and [3,4,-1,1] return 2.
 * Your algorithm should run in O(n) time and uses constant space.
 */
/*
 * 这道题的解题思路非常巧妙，就是把所有正数放到合适的位置，什么叫做合适的位置？就像按照序号一样
 * 1应该放到序号为0的位置，2应该放到序号为1的位置，依次如此，也就是放置的序号是数值减一。
 * 因此顺序扫描，将所有正数放到合适的位置，再扫描一遍，找到第一个不符合这个条件的位置，这就是缺失
 * 的第一个数，也就是序号加一。如果数列皆为非正数，那么我们在第二遍扫描的时候发现位置0就不符合条件
 * 也就是说第一个缺失的正数是1
 *
 * 这里有一个规律值得注意：假设有k个正数，那么第一个缺失的正数范围必定在[1, k+1]
 */

class Solution {
public:
    int firstMissingPositive(std::vector<int>& nums) {
        int len = nums.size();
        for(int i = 0; i < len; i++) {
            //这里使用循环非常重要，因为两个数被交换之后，其中一个数放在正确的位置
            //但并不能保证另一个数的位置是正确的，所以需要继续交换，因此使用循环
            //并且时间复杂度不是O(n^2)，应该是O(n)
            while (nums[i] > 0 && nums[i] <= len && nums[nums[i] - 1] !=
                                                          nums[i]) {
                int temp = nums[i];
                nums[i] = nums[temp - 1];
                nums[temp - 1] = temp;
            }
        }
        for(int j = 0; j < len; j++) {
            if(nums[j] != j + 1)
                return j + 1;
        }
        //当数列是依次从小到大的顺序，这说明缺失的数是最大数的下一个数，也就是len+1
        //当数列为空，len=0，缺失的数是1
        return len + 1;
    }
};
#endif //INC_41_FIRST_MISSING_POSITIVE_POSITIVE_H
