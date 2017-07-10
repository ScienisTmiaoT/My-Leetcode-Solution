//
// Created by Marvin on 2017/7/10.
//

#ifndef INC_54_SPIRAL_MATRIX_MATRIX_H
#define INC_54_SPIRAL_MATRIX_MATRIX_H

#include <iostream>
#include <vector>
#include <algorithm>

/*
 * Given a matrix of m x n elements (m rows, n columns), return all elements of the matrix in spiral order.
 * For example,
 * Given the following matrix:
 * [
 *  [ 1, 2, 3 ],
 *  [ 4, 5, 6 ],
 *  [ 7, 8, 9 ]
 * ]
 * You should return [1,2,3,6,9,8,7,4,5].
 */

/*
 * 这道题的解题思路在于发现移动的规律，螺旋式的结构相当于往左，下，右，上四个方向依次移动，
 * 而且假设我们从(0, -1)出发，那么横向移动的步数是按照从列数开始依次递减的，纵向的步数是从
 * 行数减一开始递减的，直到其中一个为0则停止。因此我们可以维护一个位置指针，依次按照这样的
 * 规律移动，移动的方向可以固定为一个数组，这样一来非常方便。
 */


class Solution {
public:
    std::vector<int> spiralOrder(std::vector<std::vector<int>>& matrix) {
        std::vector<int> res;
        int m = matrix.size();
        if(m == 0)
            return res;
        int n = matrix[0].size();
        //代表往左，往下，往右，往上四个方向，因为螺旋式的方向就是这四个方向循环
        std::vector<std::vector<int>> dir{{0,1},{1,0},{0,-1},{-1,0}};
        //代表横向走的步数（规律为，n, n-1, n-2...）
        //代表纵向走的步数（规律为，m-1, m-2...）
        //直到其中一个为0则停止
        std::vector<int> step{n, m-1};
        //从(0, -1)这个点出发，这样走的步数刚好符合规律
        int x = 0;
        int y = -1;
        //当前的方向为四个方向的哪一个
        int curdir = 0;
        while(step[curdir%2]) {
            for(int i = 0; i < step[curdir%2]; i++) {
                x += dir[curdir][0];
                y += dir[curdir][1];
                res.push_back(matrix[x][y]);
            }
            step[curdir%2]--;
            curdir++;
            curdir %= 4;
        }
        return res;
    }
};

#endif //INC_54_SPIRAL_MATRIX_MATRIX_H
