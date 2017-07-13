#include "search.h"

int main() {
//    std::vector<std::vector<char>> ch{{'A','B','C','E'},{'S','F','E','S'},
//                                      {'A','D','E','E'}};
    Solution *s = new Solution();
//    std::string word("ABCB");
//    std::string word("A");
    std::vector<std::vector<char>> ch{{'A','A'}};
    std::string word("AAA");
    std::cout<< s->exist(ch, word) << std::endl;
    std::cout << std::endl;
    return 0;
}