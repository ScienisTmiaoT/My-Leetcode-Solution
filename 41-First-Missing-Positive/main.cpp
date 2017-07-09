#include "positive.h"

int main() {
    Solution *s = new Solution();
    std::vector<int> num{2, 3, 4, 5, 1};
    int res = s->firstMissingPositive(num);
    std::cout << res << std::endl;
//    for(int i = 0; i < res.size(); i++) {
//        for(int j = 0; j < res[i].size(); j++) {
//            std::cout << res[i][j] << " ";
//        }
//        std::cout << std::endl;
//    }
    std::cout << std::endl;

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