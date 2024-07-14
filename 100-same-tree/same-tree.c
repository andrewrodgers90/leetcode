/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

bool isSame(struct TreeNode *one, struct TreeNode *two)
{
    if (one == NULL && NULL == two)
        return (true);
    if (one == NULL || two == NULL)
        return (false);
    return ((one->val == two->val) && (isSame(one->left, two->left)) && (isSame(one->right, two->right)));
}

bool isSameTree(struct TreeNode* p, struct TreeNode* q)
{
    return (isSame(p, q));
}