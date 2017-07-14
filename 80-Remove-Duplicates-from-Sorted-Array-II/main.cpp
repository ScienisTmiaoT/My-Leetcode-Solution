#include "array.h"

int main() {
    Solution *s = new Solution();
    std::vector<int> nums{1,1,1,2,2,3};
    std::cout << s->removeDuplicatesT(nums) << std::endl;
    for(int i = 0; i < nums.size(); i++)
        std::cout << nums[i] << " ";
    return 0;
}