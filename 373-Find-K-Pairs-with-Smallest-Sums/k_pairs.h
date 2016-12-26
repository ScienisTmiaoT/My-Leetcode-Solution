//
// Created by Marvin on 2016/12/26.
//

#ifndef K_PAIRS_H
#define K_PAIRS_H

#include <vector>
#include <map>
#include <algorithm>
#include <queue>
#include <iostream>

class KPair {
public:
    std::vector<std::pair<int, int>> kSmallestPairs(std::vector<int>& nums1,
                                                    std::vector<int>& nums2, int k) {
        std::vector<std::pair<std::pair<int, int>, int>> pair_sum;
        std::vector<std::pair<int, int>> min_pair;
        size_t len1 = nums1.size();
        size_t len2 = nums2.size();
        // judge empty set
        if(len1 == 0 || len2 == 0)
            return min_pair;
        for(auto ele1 : nums1){
            for(auto ele2 : nums2){
                std::pair<int, int> inner_pair(ele1, ele2);
                std::pair<std::pair<int, int>, int> outer_pair(inner_pair, ele1 + ele2);
                pair_sum.push_back(outer_pair);
            }
        }
        std::sort(pair_sum.begin(), pair_sum.end(), []
                (std::pair<std::pair<int, int>, int> a,
                 std::pair<std::pair<int, int>, int> b) {
            return a.second < b.second;
        });
        // avoid k > len
        size_t len = len1 * len2;
        for(int i = 0; (i < k) && (i < len); i++){
            min_pair.push_back(pair_sum[i].first);
        }
        return min_pair;
    }

    // use priority queue, every time calculate sub matrix, then add
    // next two pairs into queue, for example, assume we have v1 = {1, 2, 3},
    // v2 = {4, 5, 6}, then 4-smallest must come from sub vector {1, 2} and
    // {4, 5}
    std::vector<std::pair<int, int>> kSmallestPairsTwo(std::vector<int>& nums1,
                                                    std::vector<int>& nums2, int k) {
        std::vector<std::pair<std::pair<int, int>, int>> pair_sum;
        std::vector<std::pair<int, int>> min_pair;
        int len1 = nums1.size();
        int len2 = nums2.size();
        // judge empty set
        if(len1 == 0 || len2 == 0)
            return min_pair;
        auto cmp = [&nums1, &nums2](std::pair<int, int> a, std::pair<int, int>
        b){
            return nums1[a.first] + nums2[a.second] > nums1[b.first] +
                                                              nums2[b.second];
        };
        std::priority_queue<std::pair<int, int>, std::vector<std::pair<int,
                int>>, decltype(cmp)> prio_que(cmp);
        prio_que.emplace(0, 0);
        int s = std::min(k, len1 * len2);
        while(s-- > 0){
            int first = prio_que.top().first;
            int second = prio_que.top().second;
            std::pair<int, int> p(nums1[first], nums2[second]);
            min_pair.push_back(p);
            prio_que.pop();
            if(first + 1 < len1)
                prio_que.emplace(first + 1, second);
            // avoid repeating add pairs into queue
            if((first == 0) && (second + 1 < len2))
                prio_que.emplace(first, second + 1);
        }
        return min_pair;
    }
};

#endif //K_PAIRS_H
