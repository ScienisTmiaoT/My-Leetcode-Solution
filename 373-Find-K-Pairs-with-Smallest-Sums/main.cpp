//
// Created by Marvin on 2016/12/26.
//

#include "k_pairs.h"

int main() {
    std::vector<int> nums1{1, 1, 2};
    std::vector<int> nums2{1, 2, 3};
    KPair *kp = new KPair();
    std::vector<std::pair<int, int>> res = kp->kSmallestPairsTwo(nums1, nums2,
                                                               10);
    for(auto i : res)
        std::cout << i.first << " " << i.second << std::endl;
    return 0;
}