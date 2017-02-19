//
// Created by Marvin on 2016/12/27.
//

#include "decode_ways.h"

int main() {
    DecodeWays *obj = new DecodeWays();
    int res = obj->numDecodings("12");
    std::cout << res << std::endl;
    return 0;
}