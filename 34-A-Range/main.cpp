#include "range.h"

int main() {
    Solution *s = new Solution();
    std::vector<int> num{1, 2, 2, 2, 4, 4, 4, 4, 4, 5, 5, 5, 6};
    std::vector<int> result = s->searchRange(num, 6);
    std::cout << result[0] << " " << result[1] << std::endl;

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