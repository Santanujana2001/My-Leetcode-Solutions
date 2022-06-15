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
    int s=0;
    int sumOfLeftLeaves(TreeNode* root,bool n=0) {
        if(root==NULL){
            return 0;
        }
        else if(root->left==NULL && root->right==NULL){
            if(n){
                return root->val;
            }
            return 0;
        }
        return sumOfLeftLeaves(root->left,1)+sumOfLeftLeaves(root->right,0);
        }
};