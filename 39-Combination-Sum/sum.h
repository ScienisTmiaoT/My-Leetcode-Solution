//
// Created by Marvin on 2017/7/6.
//

#ifndef INC_39_COMBINATION_SUM_SUM_H
#define INC_39_COMBINATION_SUM_SUM_H
#include <iostream>
#include <vector>
#include <algorithm>

/*
 * 这道题是在一个无重复数字的数列里面找出所有能组合出目标数字的组合
 * 同一个数字可以无限次使用，解题思路就是先排序然后递归求解，深度优先
 */

class Solution {
public:
    std::vector<std::vector<int>> combinationSum(std::vector<int>& candidates,
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
            item.push_back(candidates[i]);
            //注意这里传递的是i而不是begin否则会出现很多重复数据
            tool(candidates, target - candidates[i], result, item, i);
            item.pop_back();
        }

    }
};

#endif //INC_39_COMBINATION_SUM_SUM_H
