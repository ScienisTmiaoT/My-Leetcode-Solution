#include "position.h"

int main() {
    Solution *s = new Solution();
    std::vector<int> num{1, 3, 5, 6};
    int i = s->searchInsert(num, 0);
    std::cout << i << std::endl;

//    std::vector<int> xxx{9, 3, 2, 1};
//    std::sort(xxx.begin() + 1, xxx.end());
//    for(int i = 0; i < xxx.size(); i++)
//        std::cout << xxx[i] << " ";
//    int l = num.size();
//    for(int i = 0; i < l; i++) {
//        std::cout << num[i] << " ";
//    }
//    std::cout << std::endl;
//    std::cout << r << std::endl;
    return 0;
}