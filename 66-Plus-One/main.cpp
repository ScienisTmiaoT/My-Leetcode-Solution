#include "plus.h"

int main() {
    std::vector<int> nums{9, 9, 9, 9};
    Solution *s = new Solution();
    std::vector<int> res = s->plusOne(nums);
    for(int i = 0; i < res.size(); i++)
        std::cout << res[i] << " ";
    std::cout << std::endl;
    return 0;
}