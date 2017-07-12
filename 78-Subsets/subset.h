//
// Created by Marvin on 2017/7/12.
//

#ifndef INC_78_SUBSETS_SUBSET_H
#define INC_78_SUBSETS_SUBSET_H

#include <iostream>
#include <vector>
#include <algorithm>

/*
 * Given a set of distinct integers, nums, return all possible subsets.
 * Note: The solution set must not contain duplicate subsets.
 */

/*
 * 这道题最初的思路就是DFS，每次都将item加入到res的数组里面。
 * 接下来的方法是发现了一个规律，假设结果数组为空集，每次迭代都是在原来的基础上加入新的元素：
 * 假设数字为{1,2,3}，则迭代过程为：
 * [[]]
 * [[], [1]];
 * [[], [1], [2], [1, 2]];
 * [[], [1], [2], [1, 2], [3], [1, 3], [2, 3], [1, 2, 3]].
 *
 * 第三种方法非常巧妙，相当于利用了位操作。假设数字为{1,2,3}，那么可以把生成最终结果的过程归结
 * 如下，首先是空集，迭代一次之后是每隔一个subset就加入第一个元素，相当于最低位是1就加入第一个元素
 * 第二次迭代是每隔两个subset就在接下来的两个subset加入下一个元素，相当于倒数第二位为1则加入，
 * 以此类推。那么，假设共有n个元素，子集个数就为2^n，那么可以将2^n移位判断来加入新的元素
 * [], [], [], [], [], [], [], []
 * [], [1], [], [1], [], [1], [], [1]
 * [], [1], [2], [1, 2], [], [1], [2], [1, 2]
 * [], [1], [2], [1, 2], [3], [1, 3], [2, 3], [1, 2, 3]
 */

class Solution {
public:
    //DFS
    std::vector<std::vector<int>> subsets(std::vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        std::vector<std::vector<int>> res;
        std::vector<int> item;
        tool(nums, res, item, 0);
        return res;
    }

    //不断迭代加入新的元素
    std::vector<std::vector<int>> subsetsO(std::vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        std::vector<std::vector<int>> res;
        std::vector<int> item;
        res.push_back(item);
        int len = nums.size();
        for(int i = 0; i < len; i++) {
            int n = res.size();
            for(int j = 0; j < n; j++) {
                std::vector<int> temp = res[j];
                temp.push_back(nums[i]);
                res.push_back(temp);
            }
        }
        return res;
    }

    //位操作
    std::vector<std::vector<int>> subsetsT(std::vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        int len = nums.size();
        int numsize = (1 << len);
        std::vector<std::vector<int>> res(numsize, std::vector<int>());
        for(int i = 0; i < len; i++) {
            for(int j = 0; j < numsize; j++) {
                if((j >> i) & 1)
                    res[j].push_back(nums[i]);
            }
        }
        return res;
    }
private:
    void tool(std::vector<int>& nums, std::vector<std::vector<int>>& res,
              std::vector<int>& item, int begin) {
        res.push_back(item);
        for(int i = begin; i < nums.size(); i++) {
            item.push_back(nums[i]);
            tool(nums, res, item, i + 1);
            item.pop_back();
        }
    }
};

#endif //INC_78_SUBSETS_SUBSET_H
