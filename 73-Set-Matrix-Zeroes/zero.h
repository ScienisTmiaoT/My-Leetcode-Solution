//
// Created by Marvin on 2017/7/11.
//

#ifndef INC_73_SET_MATRIX_ZEROES_ZERO_H
#define INC_73_SET_MATRIX_ZEROES_ZERO_H

#include <iostream>
#include <vector>
#include <algorithm>

/*
 * Given a m x n matrix, if an element is 0, set its entire row and column to 0.
 * Do it in place.
 */

/*
 * 这道题一种朴素的解法就是用两个数组分别存应该清零的列和行，然后再清零，空间复杂度O(m+n)
 *
 * 另一种不需要额外空间的做法就是用第一列和第一行记录需要清零的列和行，注意扫描的时候不要
 * 修改用来标记的位置的值
 */

class Solution {
public:
    void setZeroes(std::vector<std::vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        std::vector<int> row, col;
        std::vector<int> temp(n, 0);
        for(int i  = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(matrix[i][j] == 0) {
                    row.push_back(i);
                    col.push_back(j);
                }
            }
        }
        for(int i = 0; i < row.size(); i++)
            matrix[row[i]] = temp;
        for(int i = 0; i < col.size(); i++) {
            for(int j = 0; j < m; j++)
                matrix[j][col[i]] = 0;
        }
    }

    void setZeroesT(std::vector<std::vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        //判断第一列是否应该清零
        bool flag = false;
        for(int i  = 0; i < m; i++) {
            //第一列应该清零
            if(matrix[i][0] == 0) flag = true;
            //这里从j=1开始是为了不干扰第一列
            for(int j = 1; j < n; j++) {
                if(matrix[i][j] == 0) {
                    //将应该清零的列和行标记在行首和列首的位置
                    matrix[i][0] = matrix[0][j] = 0;
                }
            }
        }
        //从下往上扫描
        for(int i  = m - 1; i >= 0; i--) {
            //从后往前扫描，排除第一列
            for(int j = n - 1; j > 0; j--) {
                if(matrix[i][0] == 0 || matrix[0][j] == 0)
                    matrix[i][j] = 0;
            }
            //第一列清零
            if(flag) matrix[i][0] = 0;
        }
    }
};
#endif //INC_73_SET_MATRIX_ZEROES_ZERO_H
