#include "insert.h"

int main() {
    //[1,3],[2,6],[8,10],[15,18]
    Interval a(1, 2);
    Interval b(3, 5);
    Interval c(6, 7);
    Interval d(8, 10);
    Interval e(12, 16);
    std::vector<Interval> re;
    re.push_back(a);
    re.push_back(b);
    re.push_back(c);
    re.push_back(d);
    re.push_back(e);
    for(int i = 0; i < re.size(); i++) {
        std::cout << re[i].start << " " << re[i].end << std::endl;
    }
    std::cout << std::endl;

    Solution *s = new Solution();
    Interval ins(4, 9);
    std::vector<Interval> res = s->insert(re, ins);
    for(int i = 0; i < res.size(); i++) {
        std::cout << res[i].start << " " << res[i].end << std::endl;
    }
    return 0;
}