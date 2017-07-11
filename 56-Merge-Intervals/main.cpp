#include "merge.h"

//bool compare(Interval a, Interval b) {
//    return a.start < b.start;
//}

int main() {
    //[1,3],[2,6],[8,10],[15,18]
    Interval a(1, 3);
    Interval b(2, 6);
    Interval c(8, 10);
    Interval d(15, 18);
    std::vector<Interval> re;
    re.push_back(a);
    re.push_back(b);
    re.push_back(c);
    re.push_back(d);
    for(int i = 0; i < re.size(); i++) {
        std::cout << re[i].start << " " << re[i].end << std::endl;
    }
    std::cout << std::endl;

    Solution *s = new Solution();
    std::vector<Interval> res = s->merge(re);
    for(int i = 0; i < res.size(); i++) {
        std::cout << res[i].start << " " << res[i].end << std::endl;
    }
    return 0;
}