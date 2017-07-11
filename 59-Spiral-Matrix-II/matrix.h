//
// Created by Marvin on 2017/7/11.
//

#ifndef INC_59_SPIRAL_MATRIX_II_MATRIX_H
#define INC_59_SPIRAL_MATRIX_II_MATRIX_H

#include <iostream>
#include <vector>
#include <algorithm>

/*
 * Given an integer n, generate a square matrix filled with elements from 1 to n2 in spiral order.
 * For example,
 * Given n = 3,
 * You should return the following matrix:
 * [
 *  [ 1, 2, 3 ],
 *  [ 8, 9, 4 ],
 *  [ 7, 6, 5 ]
 * ]
 */

/*
 * 这道题的解题思路和（54. Spiral Matrix）是一样的，也是按照左，下，右，上的规律移动，定义好
 * 方向数组，更新每次移动的步数即可
 */

class Solution {
public:
    std::vector<std::vector<int>> generateMatrix(int n) {
        std::vector<std::vector<int>> res(n, std::vector<int>(n));
        //四个方向移动的坐标变换
        std::vector<std::vector<int>> direction{{0,1},{1,0},{0,-1},{-1,0}};
        std::vector<int> steps{n, n-1};
        int dir = 0;
        int x = 0;
        int y = -1;
        int num = 1;
        while(steps[dir % 2]) {
            for(int i = 0; i < steps[dir % 2]; i++) {
                x += direction[dir][0];
                y += direction[dir][1];
                res[x][y] = num++;
            }
            steps[dir % 2]--;
            dir = (dir + 1) % 4;
        }
        return res;
    }
};
#endif //INC_59_SPIRAL_MATRIX_II_MATRIX_H
