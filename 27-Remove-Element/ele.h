//
// Created by Marvin on 2017/2/23.
//

#ifndef INC_27_REMOVE_ELEMENT_ELE_H
#define INC_27_REMOVE_ELEMENT_ELE_H

#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    int removeElement(std::vector<int>& nums, int val) {
        int len = nums.size();
        int index = 0;
        for(int i = 0; i < len; i++) {
            // replace when different
            // stop when same
            if(nums[i] != val)
                nums[index++] = nums[i];
        }
        return index;
    }
};

#endif //INC_27_REMOVE_ELEMENT_ELE_H
