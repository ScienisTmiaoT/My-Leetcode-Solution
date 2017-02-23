#include "sum.h"

int main() {
    Solution *s = new Solution();
    std::vector<int> num{-1, 2, 1, -4};
    int r = s->threeSumClosest(num, 1);
    std::cout << r << std::endl;
    return 0;
}