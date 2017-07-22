//
// Created by Marvin on 2017/7/22.
//

#ifndef INC_118_PASCAL_S_TRIANGLE_TRIANGLE_H
#define INC_118_PASCAL_S_TRIANGLE_TRIANGLE_H

#include <iostream>
#include <vector>
#include <algorithm>
/*
 * Given numRows, generate the first numRows of Pascal's triangle.
 * For example, given numRows = 5,
 * Return
 * [
 * [1],
 * [1,1],
 * [1,2,1],
 * [1,3,3,1],
 * [1,4,6,4,1]
 * ]
 */
/*
 * 解题思路很简单，就是利用上一行的相邻数字相加
 */
class Solution {
public:
    std::vector<std::vector<int>> generate(int numRows) {
        std::vector<std::vector<int>> res;
        if(numRows == 0) return res;
        std::vector<int> item{1};
        res.push_back(item);
        for(int i = 0; i < numRows - 1; i++) {
            item = res.back();
            std::vector<int> temp;
            temp.push_back(1);
            for(int j = 0; j < item.size() - 1; j++) {
                temp.push_back(item[j] + item[j + 1]);
            }
            temp.push_back(1);
            res.push_back(temp);
        }
        return res;
    }

    //这种方式可以有效地减少运算内存开销
    std::vector<std::vector<int>> generateT(int numRows) {
        std::vector<std::vector<int>> res(numRows);
        for(int i = 0; i < numRows; i++) {
            res[i].resize(i + 1);
            res[i][0] = res[i][i] = 1;
            for(int j = 1; j < i; j++)
                res[i][j] = res[i - 1][j - 1] + res[i - 1][j];
        }
        return res;
    }
};
#endif //INC_118_PASCAL_S_TRIANGLE_TRIANGLE_H
