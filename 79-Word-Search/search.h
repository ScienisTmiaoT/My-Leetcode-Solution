//
// Created by Marvin on 2017/7/12.
//

#ifndef INC_79_WORD_SEARCH_SEARCH_H
#define INC_79_WORD_SEARCH_SEARCH_H

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
/*
 * Given a 2D board and a word, find if the word exists in the grid.
 * The word can be constructed from letters of sequentially adjacent cell,
 * where "adjacent" cells are those horizontally or vertically neighboring.
 * The same letter cell may not be used more than once.
 * For example,
 * Given board =
 * [
 * ['A','B','C','E'],
 * ['S','F','C','S'],
 * ['A','D','E','E']
 * ]
 * word = "ABCCED", -> returns true,
 * word = "SEE", -> returns true,
 * word = "ABCB", -> returns false.
 */

/*
 * 这道题的解题思路就是DFS，每个点都可以往四个方向走，然后判断边界，这里我用了一个标记数组来
 * 标记每次搜索的时候哪些点已经走过，不能再走了，因此，等递归返回之后需要将标记清除，搜索的结果
 * 通过递归层层往回传
 */

class Solution {
public:
    bool exist(std::vector<std::vector<char>>& board, std::string word) {
        int m = board.size(), n = board[0].size();
        //标记数组
        std::vector<std::vector<int>> history(m, std::vector<int>(n, 0));
        bool res = false;
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(board[i][j] == word[0]) {
                    //设置这个点不能再走了
                    history[i][j] = 1;
                    res = tool(board, word, i, j, 1, history);
                    //清零
                    history[i][j] = 0;
                    if(res) return res;
                }
            }
        }
        return res;
    }
private:
    bool tool(std::vector<std::vector<char>>& board, std::string& word,
              int x, int y, int index, std::vector<std::vector<int>>& history) {
        bool res = false;
        int wlen = word.size();
        if(index == wlen) return true;
        int m = board.size(), n = board[0].size();
        std::vector<std::vector<int>> direction{{0,-1},{-1,0},{1,0},{0,1}};
        for(int i = 0; i < 4; i++) {
            x += direction[i][0];
            y += direction[i][1];
            //利用短路效应先判断x和y，否则会越界
            if(x < 0 || x >= m || y < 0 || y >= n
               || board[x][y] != word[index] || history[x][y] == 1) {
                x -= direction[i][0];
                y -= direction[i][1];
                continue;
            }
            history[x][y] = 1;
            index++;
//            if(index == wlen) return true;
            res = tool(board, word, x, y, index, history);
            if(res) return res;
            //递归回退
            history[x][y] = 0;
            index--;
            x -= direction[i][0];
            y -= direction[i][1];
        }
        return res;
    }
};

/*
 * 这种方法在原来的基础上优化了存储空间，没用使用额外的标记数组，而是直接将已经走过的点
 * 改为不可能出现的字符'*'，然后再进行DFS，这里也没有使用方向数组，没有使用循环，这样一来
 * 可以省略很多在递归回退时需要恢复的状态，因为这些状态都保存在栈空间里面，所以每层回退都是原来的值
 */
class SolutionT {
public:
    bool exist(std::vector<std::vector<char>>& board, std::string word) {
        m = board.size(), n = board[0].size(), wlen = word.size();
        bool res = false;
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(board[i][j] == word[0]) {
                    res = tool(board, word, i, j, 0);
                    if(res) return res;
                }
            }
        }
        return res;
    }
private:
    int m, n, wlen;
    bool tool(std::vector<std::vector<char>>& board, std::string& word,
              int x, int y, int index) {
        if(index == wlen) return true;
        if(x < 0 || x >= m || y < 0 || y >= n || board[x][y] != word[index])
            return false;
        char temp = board[x][y];
        board[x][y] = '*';
        //这里将x,y,index传进去，如果返回的结果为false，那么，下一次寻找的起点还是原来的点
        if(tool(board, word, x, y-1, index+1) || tool(board, word, x, y+1, index+1) ||
            tool(board, word, x-1, y, index+1) || tool(board, word, x+1, y, index+1))
            return true;
        board[x][y] = temp;
        return false;
    }
};
#endif //INC_79_WORD_SEARCH_SEARCH_H
