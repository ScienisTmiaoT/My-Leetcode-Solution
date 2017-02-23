
#include "sum.h"

int main() {
    Solution *s = new Solution();
    std::vector<int> num{1, 0, -1, 0, -2, 2};
    std::vector<std::vector<int>> r = s->fourSum(num, 0);
    int l = r.size();
    for(int i = 0; i < l; i++) {
        for(int j = 0; j < 4; j++) {
            std::cout << r[i][j] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}