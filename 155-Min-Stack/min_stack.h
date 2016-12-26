//
// Created by Marvin on 2016/12/26.
//

#ifndef MIN_STACK_H
#define MIN_STACK_H

#include <stack>
#include <climits>

// one stack store data, another stack store minimal
// number. There is a trick here, when append number into
// min stack, input number will be appended only wen it is
// smaller, otherwise append top number to suit the pop operation
class MinStack {
public:
    /** initialize your data structure here. */
    MinStack() {
        min_.push(INT_MAX);
    }

    void push(int x) {
        data_.push(x);
        if(x < min_.top()) {
            min_.push(x);
        }
        else {
            int t = min_.top();
            // append current minimal number until
            // smaller number occur
            min_.push(t);
        }
    }

    void pop() {
        data_.pop();
        min_.pop();
    }

    int top() {
        return data_.top();
    }

    int getMin() {
        return min_.top();
    }

private:
    std::stack<int> data_;
    std::stack<int> min_;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(x);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */

#endif //MIN_STACK_H
