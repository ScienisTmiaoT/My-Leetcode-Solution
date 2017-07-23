#include "stock.h"

int main() {
    std::vector<int> nums{2,1,2,0,1};
    Solution *s = new Solution();
    std::cout << s->maxProfit(nums) << std::endl;
    return 0;
}