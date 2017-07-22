//
// Created by Marvin on 2017/7/22.
//

#ifndef INC_122_BEST_TIME_TO_BUY_AND_SELL_STOCK_II_STOCK_H
#define INC_122_BEST_TIME_TO_BUY_AND_SELL_STOCK_II_STOCK_H

#include <iostream>
#include <vector>
#include <algorithm>

/*
 * Say you have an array for which the ith element is the price of a given stock on day i.
 * Design an algorithm to find the maximum profit. You may complete as many transactions
 * as you like (ie, buy one and sell one share of the stock multiple times). However,
 * you may not engage in multiple transactions at the same time (ie, you must sell
 * the stock before you buy again).
 */

/*
 * 这道题的解法非常简单，就是每遇到差额为正的相邻数就加入到盈利里面，原理也很简单，假设数列里面有
 * 两个数差额最大，这是单个交易的最大盈利值，那么这个差额也可以通过不断累加相邻数的差来获得，因此，
 * 这道题的思想就是不错过任何一个差额才能获得最大盈利值，因此将每个正差额累加起来即可。
 */
class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        int len = prices.size();
        int profit = 0;
        for(int i = 0; i < len - 1; i++)
            profit += std::max(0, prices[i + 1] - prices[i]);
        return profit;
    }
};
#endif //INC_122_BEST_TIME_TO_BUY_AND_SELL_STOCK_II_STOCK_H
