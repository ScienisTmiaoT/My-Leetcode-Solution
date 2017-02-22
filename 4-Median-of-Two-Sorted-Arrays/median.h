//
// Created by Marvin on 2017/2/20.
//

#ifndef INC_4_MEDIAN_OF_TWO_SORTED_ARRAYS_MEDIAN_H
#define INC_4_MEDIAN_OF_TWO_SORTED_ARRAYS_MEDIAN_H

#include <vector>
#include <iostream>
#include <algorithm>

class Solution {
public:
    double findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>&
    nums2) {
        int len = nums1.size() + nums2.size();
        if(len % 2 == 1) {
            return findK(nums1, nums2, 0, 0, len / 2 + 1);
        }
        else{
            return (findK(nums1, nums2, 0, 0, len / 2) + findK(nums1, nums2,
                                                              0, 0, len / 2 +
                                                                       1)) /
                    2.0;
        }
    }

    double findK(std::vector<int>& a, std::vector<int>& b, int a_s, int b_s, int
    k) {
        if (a_s >= a.size())
            return b[b_s + k - 1];
        if (b_s >= b.size())
            return a[a_s + k - 1];
        if(k == 1)
            return std::min(a[a_s], b[b_s]);
        int a_k = a_s + k / 2 - 1 >= a.size() ? INT_MAX : a[a_s + k / 2 - 1];
        int b_k = b_s + k / 2 - 1 >= b.size() ? INT_MAX : b[b_s + k / 2 - 1];
        if(a_k > b_k) {
            // focus on the last parameter "k - k / 2"
            // can't be "k / 2" because the round for integer
            // division
            return findK(a, b, a_s, b_s + k / 2, k - k / 2);
        }
        else {
            return findK(a, b, a_s + k / 2, b_s, k - k / 2);
        }
    }

    double findMedianSortedArrays2(std::vector<int>& A, std::vector<int>& B) {
        int total = A.size() + B.size();
        if (total % 2 == 1)
            return findKth(A, 0, B, 0, total / 2 + 1);
        else
            return (findKth(A, 0, B, 0, total / 2)
                    + findKth(A, 0, B, 0, total / 2 + 1)) / 2.0;
    }

    int findKth(std::vector<int>& A, int ai, std::vector<int>& B, int bi, int k) {
        //always assume that A is shorter than B
        if (A.size() - ai > B.size() - bi) {
            return findKth(B, bi, A, ai, k);
        }
        if (A.size() - ai == 0) return B[bi + k - 1];
        if (k == 1) return std::min(A[ai], B[bi]);

        //divide k into two parts
        int t = A.size() - ai;
        int k1 = std::min(k / 2, t);
        int k2 = k - k1;
        if (A[ai + k1 - 1] < B[bi + k2 - 1])
            return findKth(A, ai + k1, B, bi, k - k1);
        else if (A[ai + k1 - 1] > B[bi + k2 - 1])
            return findKth(A, ai, B, bi + k2, k - k2);
        else
            return A[ai + k1 - 1];
    }
};

#endif //INC_4_MEDIAN_OF_TWO_SORTED_ARRAYS_MEDIAN_H
