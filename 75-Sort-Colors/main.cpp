#include "color.h"

int main() {
    std::vector<int> nums{0,2,1,1,2,1,2,0,0};
    Solution *s = new Solution();
    s->sortColorsT(nums);
    for(int i = 0; i < nums.size(); i++)
        std::cout << nums[i] << " ";
    std::cout << std::endl;
    return 0;
}