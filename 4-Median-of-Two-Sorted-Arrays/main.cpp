#include <iostream>
#include <vector>
#include "median.h"

int binarySearch(std::vector<int>& nums, int l, int r, int v) {
    int ll =l;
    int rr = r;
    int i = (l + r) / 2;
    while(i != ll && i != rr) {
        if(nums[i] <= v) {
            ll = i;
            i = (rr + i) / 2;
        }
        else{
            rr = i;
            i = (ll + i) / 2;
        }
    }
    return i;
}

int main() {
    std::vector<int> n1{1, 3, 6};
    std::vector<int> n2{2, 5};
    Solution *s = new Solution();
    double r = s->findMedianSortedArrays(n1, n2);
    std::cout << r << std::endl;
    return 0;
}