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
#endif //INC_79_WORD_SEARCH_SEARCH_H
