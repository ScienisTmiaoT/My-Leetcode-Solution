//
// Created by Marvin on 2017/7/11.
//

#ifndef INC_74_SEARCH_A_2D_MATRIX_SEARCH_H
#define INC_74_SEARCH_A_2D_MATRIX_SEARCH_H

#include <iostream>
#include <vector>
#include <algorithm>

/*
 * Write an efficient algorithm that searches for a value in an m x n matrix.
 * This matrix has the following properties:
 *  Integers in each row are sorted from left to right.
 *  The first integer of each row is greater than the last integer of the
 * previous row.
 * For example,
 * Consider the following matrix:
 * [
 *  [1,   3,  5,  7],
 *  [10, 11, 16, 20],
 *  [23, 30, 34, 50]
 * ]
 * Given target = 3, return true.
 */

/*
 * 这道题我一开始的解题思路就是两次二分查找，先查找到在哪一行，然后在行内进行二分查找，
 * 另外一种思路就是把矩阵当作一维数组，只要进行坐标变换即可，然后二分查找就行了
 */
class Solution {
public:
    //当作一维数组进行二分查找
    bool searchMatrix(std::vector<std::vector<int>>& matrix, int target) {
        int m = matrix.size();
        if(m == 0) return false;
        int n = matrix[0].size();
        if(n == 0) return false;
        int left = 0;
        int right = m * n - 1;
        int mid = 0;
        while(left != right) {
            mid = (left + right) / 2;
            //变换为矩阵里面的坐标
            if(target > matrix[mid / n][mid % n])
                left = mid + 1;
            else
                right = mid;
        }
        return matrix[right / n][right % n] == target;
    }

    //两次二分查找
    bool searchMatrixT(std::vector<std::vector<int>>& matrix, int target) {
        int m = matrix.size();
        //这条判断非常重要
        if(m == 0) return false;
        int n = matrix[0].size();
        //这条判断非常重要，否则上传到评判系统会报以下错误
        //reference binding to null pointer of type 'value_type'
        if(n == 0) return false;
        int up = 0;
        int down = m - 1;
        int mid = 0;
        while(up <= down) {
            mid = (up + down) / 2;
            if(target < matrix[mid][0])
                down = mid - 1;
            else if(target > matrix[mid][n - 1])
                up = mid + 1;
            else
                break;
        }
        if(up > down) return false;
        int left = 0;
        int right = n - 1;
        int rmid = 0;
        while(left <= right) {
            rmid = (left + right) / 2;
            if(target < matrix[mid][rmid])
                right = rmid - 1;
            else if(target > matrix[mid][rmid])
                left = rmid + 1;
            else
                break;
        }

        if(target == matrix[mid][rmid])
            return true;
        else
            return false;
    }
};
#endif //INC_74_SEARCH_A_2D_MATRIX_SEARCH_H
