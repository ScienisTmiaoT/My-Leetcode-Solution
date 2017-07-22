//
// Created by Marvin on 2017/7/22.
//

#ifndef INC_106_CONSTRUCT_BINARY_TREE_FROM_INORDER_AND_POSTORDER_TRAVERSAL_TREE_H
#define INC_106_CONSTRUCT_BINARY_TREE_FROM_INORDER_AND_POSTORDER_TRAVERSAL_TREE_H
#include <iostream>
#include <vector>
#include <algorithm>
/*
 * Given inorder and postorder traversal of a tree, construct the binary tree.
 * Note:
 * You may assume that duplicates do not exist in the tree.
 */
/*
 * 这道题的解法和（105. Construct Binary Tree from Preorder and Inorder Traversal）
 * 是一样的，也是先找到根节点（在后序遍历中为最后一个元素），然后在中序遍历里面找到左右子树的
 * 长度，使用递归求解
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode* buildTree(std::vector<int>& inorder, std::vector<int>&
    postorder) {
        int ilen = inorder.size(), plen = postorder.size();
        if(plen == 0 || ilen == 0) return NULL;
        return tool(inorder, postorder, 0, ilen - 1, plen - 1, 0);
    }

    TreeNode* tool(std::vector<int>& inorder, std::vector<int>& postorder, int
    is, int ie, int ps, int pe) {
        if(ps < pe) return NULL;
        TreeNode* node = new TreeNode(postorder[ps]);
        int index = 0;
        //找到每棵树的根节点
        for(int i = is; i <= ie; i++)
            if(inorder[i] == node->val) {
                index = i;
                break;
            }
        //在定位左右子树起始位置和终点位置的时候要格外小心，要使用左右子树的长度作为依据
        node->left = tool(inorder, postorder, is, index - 1, pe + index - is - 1, pe);
        node->right = tool(inorder, postorder, index + 1, ie, ps - 1, ps - ie + index);
        return node;
    }
    void preorder(TreeNode* node) {
        if(node == NULL) return;
        std::cout << node->val;
        preorder(node->left);
        preorder(node->right);
    }
    void inorder(TreeNode* node) {
        if(node == NULL) return;
        inorder(node->left);
        std::cout << node->val;
        inorder(node->right);
    }
    void postorder(TreeNode* node) {
        if(node == NULL) return;
        postorder(node->left);
        postorder(node->right);
        std::cout << node->val;
    }
};
#endif //INC_106_CONSTRUCT_BINARY_TREE_FROM_INORDER_AND_POSTORDER_TRAVERSAL_TREE_H
