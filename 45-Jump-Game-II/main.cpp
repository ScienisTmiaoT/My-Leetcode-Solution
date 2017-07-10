#include "game.h"

int main() {
    Solution *s = new Solution();
    std::vector<int> nums{2,4,1,1,1,4};
    int res = s->jump(nums);
    std::cout << res << std::endl;

//    std::vector<std::vector<int>> t{{1, 2},{0, 1},{4, 2}, {3, 2}};
//    std::sort(t.rbegin(), t.rend());
//    for(int i = 0; i < t.size(); i++) {
//        for(int j = 0; j < t[i].size(); j++) {
//            std::cout << t[i][j] << " ";
//        }
//        std::cout << std::endl;
//    }

    return 0;
}