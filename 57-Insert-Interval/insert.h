//
// Created by Marvin on 2017/7/11.
//

#ifndef INC_57_INSERT_INTERVAL_INSERT_H
#define INC_57_INSERT_INTERVAL_INSERT_H

#include <iostream>
#include <vector>
#include <algorithm>

/*
 * Given a set of non-overlapping intervals, insert a new interval into the
 * intervals (merge if necessary). You may assume that the intervals were
 * initially sorted according to their start times.
 * Example 1:
 * Given intervals [1,3],[6,9], insert and merge [2,5] in as [1,5],[6,9].
 * Example 2:
 * Given [1,2],[3,5],[6,7],[8,10],[12,16], insert and merge [4,9] in as [1,2],
 * [3,10],[12,16].
 * This is because the new interval [4,9] overlaps with [3,5],[6,7],[8,10].
 */

/*
 * 这道题的解题思路是不断扫描，然后更新当前合并区间的边界，大体思想如此，不过我的做法有点复杂化，
 * 导致逻辑变得复杂，其实简洁的做法应该是，判断与插入区间不会重合的区域，然后将这些区域依次加入到
 * 返回的数组中，也就是先找合并的区间，再加入剩下的元素。想象一下，假设插入的新区间在最前面，那么
 * 可以先加入新区间，再加入数组区间，如果在中间，则可以先加入数组的前半部分，再加入新区间，然后是
 * 数组的后半部分。如果应该插入尾部，那么先加入数组区间，再插入新区间。总之就是判断新区间应该在哪
 * 合并，找到边界之后再去生成返回的结果数组。
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
class Solution {
public:
    std::vector<Interval> insert(std::vector<Interval>& intervals, Interval
    newInterval) {
        std::vector<Interval> res;
        int len = intervals.size();
        if(len == 0)
        {
            res.push_back(newInterval);
            return res;
        }
        if(newInterval.end < intervals[0].start) {
            intervals.insert(intervals.begin(), newInterval);
            res = intervals;
            return res;
        }
        int left = -1;
        int right = -1;
        int start = newInterval.start;
        int end = newInterval.end;
        bool flag = false;
        for(int i = 0; i < len; i++) {
            if(start > intervals[i].end ||
                    end < intervals[i].start) {
                if (left != -1) {
                    Interval temp(start, end);
                    res.push_back(temp);
                    left = -1;
                    flag = true;
                }
                else if((end < intervals[i].start) && !flag) {
                    Interval temp(start, end);
                    res.push_back(temp);
                    flag = true;
                }
                res.push_back(intervals[i]);
            }
            else {
                if(left == -1) {
                    right = left = i;
                    start = std::min(intervals[i].start, start);
                    end = std::max(intervals[i].end, end);
                }
                else {
                    right = i;
                    end = std::max(intervals[i].end, end);
                }
            }
        }
        if( !flag && (left != -1 || right == -1)) {
            Interval temp(start, end);
            res.push_back(temp);
        }
        return res;
    }
};
#endif //INC_57_INSERT_INTERVAL_INSERT_H
