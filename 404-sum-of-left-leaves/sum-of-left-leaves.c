/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int helperSumOfLeftLeaves(struct TreeNode *root, bool isLeft)
{
    if (NULL == root)
        return (0);
    if (NULL == root->left && NULL == root->right && isLeft)
        return (root->val);
    return (helperSumOfLeftLeaves(root->left, true) + helperSumOfLeftLeaves(root->right, false));
}

int sumOfLeftLeaves(struct TreeNode* root)
{
    return (helperSumOfLeftLeaves(root, false));
}