#include "matrix.h"

int main() {
    Solution *s = new Solution();
    std::vector<std::vector<int>> res = s->generateMatrix(5);
    for(int i = 0; i < res.size(); i++) {
        for(int j = 0; j < res[i].size(); j++) {
            std::cout << res[i][j] << " ";
        }
        std::cout << std:: endl;
    }
    return 0;
}