//
// Created by Marvin on 2017/7/11.
//

#ifndef INC_62_UNIQUE_PATHS_PATH_H
#define INC_62_UNIQUE_PATHS_PATH_H

#include <iostream>
#include <vector>
#include <algorithm>

/*
 * A robot is located at the top-left corner of a m x n grid (marked 'Start' in the diagram below).
 *T he robot can only move either down or right at any point in time. The robot
 * is trying to reach the bottom-right corner of the grid (marked 'Finish' in
 * the diagram below). How many possible unique paths are there?
 * Above is a 3 x 7 grid. How many possible unique paths are there?
 * Note: m and n will be at most 100.
 */

/*
 * 这道题的思路主要是动态规划，当前位置只可能来自上面或者左边（除去第一列和第一行），
 * 因此Path[i][j] = Path[i][j-1] + Path[i-1][j]，也就是当前位置所有可能的路径是两个方向
 * 的和，因此只要初始化第一列和第一行，然后依次遍历即可。注意初始化的值为1，因为第一列和第一行
 * 都只有一条来源的路径。
 */

class Solution {
public:
    int uniquePaths(int m, int n) {
        std::vector<std::vector<int>> path(m, std::vector<int>(n, 1));
        for(int i = 1; i < m; i++) {
            for(int j = 1; j < n; j ++) {
                path[i][j] = path[i - 1][j] + path[i][j - 1];
            }
        }
        return path[m - 1][n - 1];
    }

    //优化存储空间，可以只用一行来保存计算出来的路径，因为里面的循环相当于遍历一行，
    //因此只要用一行存储计算出来的值用于下一行计算即可
    int uniquePathsT(int m, int n) {
//        std::vector<std::vector<int>> path(m, std::vector<int>(n, 1));
        std::vector<int> col(n, 1);
        int row = 1;
        for(int i = 1; i < m; i++) {
            for(int j = 1; j < n; j ++) {
                col[j] += col[j - 1];
            }

        }
        return col[n - 1];
    }

};
#endif //INC_62_UNIQUE_PATHS_PATH_H
