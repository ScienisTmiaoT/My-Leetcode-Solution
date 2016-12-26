//
// Created by Marvin on 2016/12/26.
//

#ifndef K_PAIRS_H
#define K_PAIRS_H

#include <vector>
#include <map>
#include <algorithm>

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
};

#endif //K_PAIRS_H
