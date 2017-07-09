//
// Created by Marvin on 2017/7/9.
//

#ifndef INC_40_COMBINATION_SUM_II_SUM_H
#define INC_40_COMBINATION_SUM_II_SUM_H
#include <iostream>
#include <vector>
#include <algorithm>

/*
 * 这道题是在一个数列里面找到组合成目标数字的所有组合，注意这个数列里面可能有重复数字并且每个数字
 * 只能用一次，解题思路就是先排序，然后递归求解，在递归的时候要剔除掉相同的起始数字，因为已经排过序了
 * 所以可以直接判断相邻两个数字是否相同
 */

class Solution {
public:
    std::vector<std::vector<int>> combinationSum2(std::vector<int>& candidates,
                                                 int target) {
        int len = candidates.size();
        std::vector<std::vector<int>> result;
        std::vector<int> item;
        std::sort(candidates.begin(), candidates.end());
        tool(candidates, target, result, item, 0);
        return result;
    }

private:
    void tool(std::vector<int>& candidates, int target,
              std::vector<std::vector<int>>& result, std::vector<int>&
    item, int begin) {
        if(target == 0) {
            result.push_back(item);
            return;
        }
        for(int i = begin; i < candidates.size() && target >= candidates[i];
        i++) {
            //在排过序的数列里面剔除掉相同的数字以免获得同样的组合
            if(i > begin && candidates[i] == candidates[i - 1])
                continue;
            item.push_back(candidates[i]);
            //注意这里传递的是i+1而不是i是为了每个数字只允许用一次
            tool(candidates, target - candidates[i], result, item, i+1);
            item.pop_back();
        }

    }
};
#endif //INC_40_COMBINATION_SUM_II_SUM_H
