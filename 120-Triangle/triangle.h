//
// Created by Marvin on 2017/7/22.
//

#ifndef INC_120_TRIANGLE_TRIANGLE_H
#define INC_120_TRIANGLE_TRIANGLE_H
/*
 * Given a triangle, find the minimum path sum from top to bottom.
 * Each step you may move to adjacent numbers on the row below.
 * For example, given the following triangle
 * [
 * [2],
 * [3,4],
 * [6,5,7],
 * [4,1,8,3]
 * ]
 * The minimum path sum from top to bottom is 11 (i.e., 2 + 3 + 5 + 1 = 11).
 * Note:
 * Bonus point if you are able to do this using only O(n) extra space,
 * where n is the total number of rows in the triangle.
 */
/*
 * 这道题的直观方法就是DP，每个点可以来自于上一行和它相邻的两个点，然后解决边界问题，还有一种十分
 * 简洁的方法是从底往上算，每个点来自于下一行的相邻两个点，最后的最小值刚好在顶点处
 */
#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    int minimumTotal(std::vector<std::vector<int>>& triangle) {
        int len = triangle.size();
        if(len == 0) return 0;
        int path = INT_MAX;
        std::vector<int> cost(triangle[len - 1].size(), INT_MAX / 2);
        cost[0] = 0;
        for(int i = 0; i < len; i++) {
            for(int j = triangle[i].size() - 1; j > 0; j--) {
                cost[j] = std::min(triangle[i][j] + cost[j], triangle[i][j] + cost[j - 1]);
                if(i == len - 1)
                    path = std::min(path, cost[j]);
            }
            cost[0] += triangle[i][0];
        }
        return std::min(path, cost[0]);
    }

    // bottom up
    int minimumTotalT(std::vector<std::vector<int>>& triangle) {
        //将最后一行复制给cost用来初始化
        std::vector<int> cost = triangle[triangle.size() - 1];
        for(int i = triangle.size() - 2; i >= 0; i--)
            for(int j = 0; j <= i; j++)
                cost[j] = std::min(cost[j], cost[j + 1]) + triangle[i][j];
        return cost[0];
    }
};
#endif //INC_120_TRIANGLE_TRIANGLE_H
