//
// Created by Marvin on 2017/7/22.
//

#ifndef INC_121_BEST_TIME_TO_BUY_AND_SELL_STOCK_STOCK_H
#define INC_121_BEST_TIME_TO_BUY_AND_SELL_STOCK_STOCK_H
/*
 * Say you have an array for which the ith element is the price of a given stock on day i.
 * If you were only permitted to complete at most one transaction
 * (ie, buy one and sell one share of the stock), design an algorithm to find the maximum profit.
 * Example 1:
 * Input: [7, 1, 5, 3, 6, 4]
 * Output: 5
 * max. difference = 6-1 = 5 (not 7-1 = 6, as selling price needs to be larger than buying price)
 * Example 2:
 * Input: [7, 6, 4, 3, 1]
 * Output: 0
 * In this case, no transaction is done, i.e. max profit = 0.
 */
/*
 * 解题思路就是定位当前的最小值，然后计算扫描到的数和当前最小值的差，遇到更小的数则更新最小值，
 * 还有一种思路是不断计算累加的差，每次都更新最大的差
 */
#include <iostream>
#include <vector>
#include <algorithm>
class Solution {
public:
    //计算最大差
    int maxProfit(std::vector<int>& prices) {
        int len = prices.size();
        if(len == 0) return 0;
        int mini = INT_MAX;
        int profit = 0;
        for(int i = 0; i < len - 1; i++) {
            mini = std::min(mini, prices[i]);
            profit = std::max(profit, prices[i + 1] - mini);
        }
        return profit;
    }
    //累加差
    int maxProfitT(std::vector<int>& prices) {
        int len = prices.size();
        int acc = 0, maxm = 0;
        for(int i = 0; i < len - 1; i++) {
            acc = std::max(0, acc + prices[i + 1] - prices[i]);
            maxm = std::max(maxm, acc);
        }
        return maxm;
    }
};
#endif //INC_121_BEST_TIME_TO_BUY_AND_SELL_STOCK_STOCK_H
