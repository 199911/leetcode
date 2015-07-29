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
bool isSameTree(struct TreeNode* p, struct TreeNode* q) {


    if ( p == q && p == NULL) {
        return true;
    } else if (p == NULL || q == NULL) {
        return false;
    }
    return (p->val == q->val) && (isSameTree(p->left,q->left)) && (isSameTree(p->right,q->right));
}
