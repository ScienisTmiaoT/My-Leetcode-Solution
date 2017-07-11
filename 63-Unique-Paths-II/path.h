//
// Created by Marvin on 2017/7/11.
//

#ifndef INC_63_UNIQUE_PATHS_II_PATH_H
#define INC_63_UNIQUE_PATHS_II_PATH_H

#include <iostream>
#include <vector>
#include <algorithm>

/*
 * Follow up for "Unique Paths":
 * Now consider if some obstacles are added to the grids. How many unique paths
 * would there be?
 * An obstacle and empty space is marked as 1 and 0 respectively in the grid.
 * For example,
 * There is one obstacle in the middle of a 3x3 grid as illustrated below.
 * [
 * [0,0,0],
 * [0,1,0],
 * [0,0,0]
 * ]
 * The total number of unique paths is 2.
 * Note: m and n will be at most 100.
 */

/*
 * 这道题和（62. Unique Paths）的解法大致一样，都是运用DP的思想，不过，这里需要限制一下，
 * 比如初始化第一列和第一行的时候遇到障碍，则之后的点都初始化为0，因为不可能从该点过来。此外，
 * 在计算某个位置的路径来源的时候，需要判断自身以及上面和左边那个点是否为障碍，依次做出改变
 */
class Solution {
public:
    int uniquePathsWithObstacles(std::vector<std::vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        //先初始化为0
        std::vector<std::vector<int>> path(m, std::vector<int>(n, 0));
        //设置第一列，前面没有障碍就可以设置为1
        for(int i = 0; i < m; i++)
            if(obstacleGrid[i][0] == 1) break;
            else path[i][0] = 1;
        //设置第一行，前面没有障碍就可以设置为1
        for(int i = 0; i < n; i++)
            if(obstacleGrid[0][i] == 1) break;
            else path[0][i] = 1;

        for(int i = 1; i < m; i++) {
            for(int j = 1; j < n; j++) {
                //直接设置该点路径数为0
                if(obstacleGrid[i][j] == 1) {
                    path[i][j] = 0;
                    continue;
                }
                //可以简化，因为我们知道障碍位置的path数的初始值为0，所以可以直接在该点
                // 不为障碍的时候有上面和左边的path相加而来
                int x = obstacleGrid[i - 1][j] == 1 ? 0 : path[i - 1][j];
                int y = obstacleGrid[i][j - 1] == 1 ? 0 : path[i][j - 1];
                path[i][j] = x + y;
            }
        }
        return path[m - 1][n - 1];
    }
};

#endif //INC_63_UNIQUE_PATHS_II_PATH_H
