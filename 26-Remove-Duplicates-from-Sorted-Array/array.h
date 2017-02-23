//
// Created by Marvin on 2017/2/23.
//

#ifndef INC_26_REMOVE_DUPLICATES_FROM_SORTED_ARRAY_ARRAY_H
#define INC_26_REMOVE_DUPLICATES_FROM_SORTED_ARRAY_ARRAY_H

#include <iostream>
#include <vector>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        int len = nums.size();
        if(len == 0)
            return 0;
        int index = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != nums[index])
                nums[++index] = nums[i];
        }
        return index + 1;
    }
};

#endif //INC_26_REMOVE_DUPLICATES_FROM_SORTED_ARRAY_ARRAY_H
