#include "stock.h"

int main() {
    Solution *s = new Solution();
    std::vector<int> nums{7,6,4,3,1};
    std::cout << s->maxProfitT(nums) << std::endl;
    return 0;
}