//
// Created by Marvin on 2017/7/11.
//

#ifndef INC_64_MINIMUM_PATH_SUM_PATH_H
#define INC_64_MINIMUM_PATH_SUM_PATH_H

#include <iostream>
#include <vector>
#include <algorithm>

/*
 * Given a m x n grid filled with non-negative numbers, find a path from top left
 * to bottom right which minimizes the sum of all numbers along its path.
 * Note: You can only move either down or right at any point in time.
 */

/*
 * 这道题的解题思路和（62. Unique Paths）以及（63. Unique Paths II）是大致一样的，因为也
 * 是同样的DP问题，最小累加和只可能来源于两个方向的最小值，因此解法一样，不过需要注意的是，我在
 * 这里额外使用了一个数组，每一行每一列的初始化应该是累加和，因为要通过前面的位置到达当前位置
 * 而不是单独的元素值，其实可以将这个数组省略，直接在原数组操作
 */
class Solution {
public:
    int minPathSum(std::vector<std::vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        std::vector<std::vector<int>> path(m, std::vector<int>(n, 0));
        //初始化第一列，初始值为累加和
        for(int i = 0; i < m; i++) {
            if(i == 0) path[i][0] = grid[i][0];
            else path[i][0] = grid[i][0] + path[i - 1][0];
        }
        //初始化第一行，初始值为累加和
        for(int i = 0; i < n; i++) {
            if(i == 0) path[0][i] = grid[0][i];
            else path[0][i] = grid[0][i] + path[0][i - 1];
        }
        for(int i = 1; i < m; i ++) {
            for(int j = 1; j < n; j++) {
                //最小值来源
                path[i][j] = std::min(grid[i][j] + path[i][j - 1],
                                      grid[i][j] + path[i - 1][j]);
            }
        }
        return path[m  - 1][n - 1];
    }
};
#endif //INC_64_MINIMUM_PATH_SUM_PATH_H
