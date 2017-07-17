#include "array.h"

int main() {
    Solution *s = new Solution();
    std::vector<int> nums{1};
    std::cout << s->search(nums, 1) << std::endl;
    return 0;
}