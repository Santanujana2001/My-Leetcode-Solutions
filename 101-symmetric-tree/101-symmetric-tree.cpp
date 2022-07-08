/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *    int val;
 *    TreeNode * left;
 *    TreeNode * right;
 *    TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    public:
       	//     kevin naughton's explaination is really good
        bool ans(TreeNode *l, TreeNode *r)
        {
            if (!l || !r)
            {
                return l == r;
            }
            if (l->val != r->val)
            {
                return false;
            }
            return ans(l->left, r->right) && ans(l->right, r->left);
        }
    bool isSymmetric(TreeNode *root)
    {
        if (!root)
        {
            return true;
        }
        return ans(root->left, root->right);
    }
};