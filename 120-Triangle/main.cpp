#include "triangle.h"

int main() {
    std::vector<std::vector<int>> tri{{-1},{-2,-3}};
    Solution *s = new Solution();
    std::cout << s->minimumTotalT(tri) << std::endl;
    return 0;
}