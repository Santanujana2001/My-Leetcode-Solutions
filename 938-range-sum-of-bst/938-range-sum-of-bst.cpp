/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int sm=0;
    int s(TreeNode* root, int l, int h){
        if(root){
            s(root->left,l,h);
            if(root->val>=l && root->val<=h){
                sm+=root->val;
            }
            s(root->right,l,h);
        }
        return sm;
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(!root){
            return 0;
        }
        return s(root,low,high);
    }
};