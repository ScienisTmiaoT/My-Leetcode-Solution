//
// Created by Marvin on 2017/7/11.
//

#ifndef INC_56_MERGE_INTERVALS_MERGE_H
#define INC_56_MERGE_INTERVALS_MERGE_H

#include <iostream>
#include <vector>
#include <algorithm>

/*
 * Given a collection of intervals, merge all overlapping intervals.
 * For example,
 * Given [1,3],[2,6],[8,10],[15,18],
 * return [1,6],[8,10],[15,18].
 */

/*
 * 这道题的主要想法就是先按照start从小到大排序，然后依次合并即可
 */

/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */

struct Interval {
    int start;
    int end;
    Interval() : start(0), end(0) {}
    Interval(int s, int e) : start(s), end(e) {}
};

bool compare(const Interval &a, const Interval &b) {
    return a.start < b.start;
}

class Solution {
public:
    std::vector<Interval> merge(std::vector<Interval>& intervals) {
        std::vector<Interval> res;
        int len = intervals.size();
        if(len == 0)
            return res;
        else if(len == 1)
            return intervals;
        std::sort(intervals.begin(), intervals.end(), compare);
        //直接将比较函数定义在调用语句里面
//        std::sort(intervals.begin(), intervals.end(),
//                  [](Interval a, Interval b){return a.start < b.start;});
        int curindex = 0;
        res.push_back(intervals[0]);
        for(int i = 1; i < len; i++) {
            if(intervals[i].start <= res[curindex].end) {
                int start = res[curindex].start;
                int end = std::max(res[curindex].end, intervals[i].end);
                Interval temp(start, end);
                res[curindex] = temp;
            }
            else {
                res.push_back(intervals[i]);
                curindex++;
            }
        }
        return res;
    }
};

#endif //INC_56_MERGE_INTERVALS_MERGE_H
