#include "sum.h"

int main() {
    Solution *s = new Solution();
    std::vector<int> num{-1, 0, 1, 2, -1, -4};
    std::vector<std::vector<int>> r = s->threeSum(num);
    int l = r.size();
    for(int i = 0; i < l; i++) {
        for(int j = 0; j < 3; j++) {
            std::cout << r[i][j] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}