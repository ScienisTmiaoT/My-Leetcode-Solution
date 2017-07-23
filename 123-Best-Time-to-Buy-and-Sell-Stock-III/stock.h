//
// Created by Marvin on 2017/7/22.
//

#ifndef INC_123_BEST_TIME_TO_BUY_AND_SELL_STOCK_III_STOCK_H
#define INC_123_BEST_TIME_TO_BUY_AND_SELL_STOCK_III_STOCK_H

#include <iostream>
#include <vector>
#include <algorithm>
/*
 * Say you have an array for which the ith element is the price of a given stock on day i.
 * Design an algorithm to find the maximum profit. You may complete at most two transactions.
 * Note:
 * You may not engage in multiple transactions at the same time
 * (ie, you must sell the stock before you buy again).
 */

class Solution {
public:
    //使用两个数组分别记录从前往后到达该索引所能获得的最大收益、从后往前到达该索引所能获得的最小收益
    //两者相减可找到最大收益
    int maxProfit(std::vector<int>& prices) {
        int len = prices.size();
        if(len == 0) return 0;
        int profit = 0;
        std::vector<int> pre(len, 0);
        std::vector<int> post(len, 0);
        int curmin = prices[0];
        for(int i = 1; i < len - 1; i++) {
            curmin = std::min(curmin, prices[i]);
            pre[i] = std::max(pre[i - 1], prices[i] - curmin);
        }
        int curmax = prices[len - 1];
        for(int i = len - 2; i >= 0; i--) {
            curmax = std::max(curmax, prices[i]);
            post[i] = std::min(post[i + 1], prices[i] - curmax);
            profit = std::max(profit, pre[i] - post[i]);
        }
        return profit;
    }
    //解决K次交易的通用方法
    // log[k][j] 表示最多使用k次交易后直到 prices[j]的最大收益 （不一定以prices[j]收尾）
    // log[k][j] = max(log[k][j-1], prices[j] - prices[i] + log[k-1][i]) {
    // i in range of [0, j-1] }
    // = max(f[k][j-1], prices[j] + max(log[k-1][i] - prices[i]))
    // log[0][j] = 0; 不产生交易无收益
    // log[k][0] = 0; 只有一个价格无收益
    int maxProfitT(std::vector<int>& prices) {
        int len = prices.size();
        if(len == 0) return 0;
        int k = 2;
        std::vector<std::vector<int>> log(k + 1, std::vector<int>(len, 0));
        for(int i = 1; i <= k; i++) {
            int temp = log[i - 1][0] - prices[0];
            for(int j = 1; j < len; j++) {
                log[i][j] = std::max(log[i][j - 1], temp + prices[j]);
                temp = std::max(temp, log[i - 1][j] - prices[j]);
            }
        }
        return log[k][len - 1];
    }

    //神奇的解法，按照步骤使得当前的买进卖出的收益最大化，共有四个步骤：
    //买进第一只股票，最小化价格buy1；卖出第一支股票，最大化收益（sell1-buy1）；
    //买进第二只股票，最小化价格buy2；卖出第二支股票，最大化收益（sell2-buy2）
    //如果要进行K次交易，可以各自使用两个K长度的数组存储buy和sell
    //这种方法背后的转化逻辑
    // buy1[i] = max(-prices[i], buy1 Last Changed)
    // sell1[i] = max(buy1 Last Changed + price[i], sell1 Last Changed)
    // buy2[i] = max(sell1 Last Changed - prices[i], buy2 Last Changed)
    // sell2[i] = max(buy2 Last Changed + price[i], sell2 Last Changed)
    int maxProfitTT(std::vector<int>& prices) {
        int buy1 = INT_MIN, buy2 = INT_MIN, sell1 = 0, sell2 = 0;
        int len = prices.size();
        for(int i = 0; i < len; i++) {
            buy1 = std::max(buy1, -prices[i]);
            sell1 = std::max(sell1, prices[i] + buy1);
            buy2 = std::max(buy2, sell1 - prices[i]);
            sell2 = std::max(sell2, buy2 + prices[i]);
        }
        return sell2;
    }
};
#endif //INC_123_BEST_TIME_TO_BUY_AND_SELL_STOCK_III_STOCK_H
