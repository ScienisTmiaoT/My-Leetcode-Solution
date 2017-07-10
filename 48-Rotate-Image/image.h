//
// Created by Marvin on 2017/7/10.
//

#ifndef INC_48_ROTATE_IMAGE_IMAGE_H
#define INC_48_ROTATE_IMAGE_IMAGE_H

#include <iostream>
#include <vector>
#include <algorithm>

/*
 * You are given an n x n 2D matrix representing an image.
 * Rotate the image by 90 degrees (clockwise).
 * Follow up: Could you do this in-place?
 */

/*
 * 这道题我的思路是每一圈进行交换，什么意思呢？
 * 比如假设矩阵为：
 *  1  2  3  4
 *  5  6  7  8
 * 10 11 12 13
 * 14 15 16 17
 * 首先对最外面这一圈进行交换，具体的过程是每一圈只需要交换三次，将(0,0) (0,1) (0,2)位置的
 * 1 2 3与4 8 13交换，紧接着将同样位置的数与17 16 15交换，最后与14 10 5交换，也就是顺时针
 * 交换，这样最外面一圈交换完成，然后对里面一圈继续同样的方法，每次都排除最后一个元素，直到所有的
 * 交换完成。这种方法有点繁琐，极容易出错。因此有更为简便的方法：
 *
 * 顺时针旋转：首先将每一列的数反转一下，然后将对称位置的数交换即可
 * 逆时针旋转：首先将每一行的数反转一下，然后将对称位置的数交换即可
 *
 */

class Solution {
public:
    void rotate(std::vector<std::vector<int>>& matrix) {
        int n = matrix.size();
        int loop = n / 2;
        for(int i = 0; i < loop; i++) {
            int k = n - i - 1;
            for(int j = i; j < k; j++) {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][k];
                matrix[j][k] = temp;
            }
            for(int j = i; j < k; j++) {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[k][k - (j - i)];
                matrix[k][k - (j - i)] = temp;
            }
            for(int j = i; j < k; j++) {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[k - (j - i)][i];
                matrix[k - (j - i)][i] = temp;
            }
        }
    }
};

#endif //INC_48_ROTATE_IMAGE_IMAGE_H
