#include "header.h"

// Very simple, just use recursion to transverse the tree
// Need to pay attention on base case and boundary case

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int walk(struct TreeNode* root){
    int l, r;
    int ret = 0;
    if(root->left){
        l = walk(root->left);
        if ( l > ret){
            ret = l;
        }
    }
    if(root->right){
        r = walk(root->right);
        if ( r > ret){
            ret = r;
        }
    }
    return ret + 1;
}
int maxDepth(struct TreeNode* root) {
    if (root)
        return walk(root);
    else
        return 0;
}
