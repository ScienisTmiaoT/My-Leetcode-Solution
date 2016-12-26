//
// Created by Marvin on 2016/12/26.
//

#include "min_stack.h"

#include <iostream>

int main() {
    MinStack *obj = new MinStack();
    obj->push(-2);
    obj->push(0);
    obj->push(-3);
    int param_4 = obj->getMin();
    obj->pop();
    int param_5 = obj->getMin();
    std::cout << param_4 << " " << param_5 << std::endl;
    return 0;
}