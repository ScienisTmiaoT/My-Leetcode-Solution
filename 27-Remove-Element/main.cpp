#include "ele.h"

int main() {
    Solution *s = new Solution();
    std::vector<int> num{1, 2, 3, 4};
    int r = s->removeElement(num, 1);
    int l = num.size();
    for(int i = 0; i < l; i++) {
        std::cout << num[i] << " ";
    }
    std::cout << std::endl;
    std::cout << r << std::endl;
    return 0;
}