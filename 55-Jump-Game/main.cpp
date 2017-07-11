#include "game.h"

int main() {
    Solution *s = new Solution();
    std::vector<int> nums{2,3,1,1,4};
    bool res = s->canJump(nums);
    std::cout << res << std::endl;
    return 0;
}