#include "search.h"

int main() {
//    std::vector<std::vector<int>> num{{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 50}};
    std::vector<std::vector<int>> num{{1},{2},{4},{6}};
    Solution *s = new Solution();
    std::cout << s->searchMatrix(num, 4) << std::endl;
    return 0;
}