#include "two_sum.h"

int main() {
    Solution *s = new Solution();
    std::vector<int> num{2, 7, 11, 15};
    std::vector<int> res = s->twoSum(num, 9);
    for(int i = 0; i < res.size(); i++)
        std::cout << res[i] << "";
    return 0;
}