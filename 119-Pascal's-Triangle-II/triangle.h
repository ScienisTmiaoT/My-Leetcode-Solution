//
// Created by Marvin on 2017/7/22.
//

#ifndef INC_119_PASCAL_S_TRIANGLE_II_TRIANGLE_H
#define INC_119_PASCAL_S_TRIANGLE_II_TRIANGLE_H

#include <iostream>
#include <vector>
#include <algorithm>

/*
 * Given an index k, return the kth row of the Pascal's triangle.
 * For example, given k = 3,
 * Return [1,3,3,1].
 * Note:
 * Could you optimize your algorithm to use only O(k) extra space?
 */
/*
 * 这道题的第一种解法就是使用局部变量存储上一次被修改的位置的值用于下一次计算，如果不使用
 * 局部变量就从后往前开始计算，因为从后往前每次修改的都是后面的位置，并不用于下一次计算
 */
class Solution {
public:
    std::vector<int> getRow(int rowIndex) {
        rowIndex += 1;
        std::vector<int> res(rowIndex);
        for(int i = 0; i < rowIndex; i++) {
            res[0] = res[i] = 1;
            int temp = 1;
            for(int j = 1; j < i; j++) {
                int t = res[j];
                res[j] += temp;
                temp = t;
            }
        }
        return res;
    }
    std::vector<int> getRowT(int rowIndex) {
        rowIndex += 1;
        std::vector<int> res(rowIndex, 0);
        res[0] = 1;
        for(int i = 0; i < rowIndex; i++) {
            //从后往前计算
            for(int j = i; j > 0; j--)
                res[j] += res[j - 1];
        }
        return res;
    }
};
#endif //INC_119_PASCAL_S_TRIANGLE_II_TRIANGLE_H
