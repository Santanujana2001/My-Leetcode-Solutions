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
    bool isBst(TreeNode* r,TreeNode* &p){
        if(!r){
            return  true;
        }
        if(!isBst(r->left,p)){
            return false;
        }
        if(p && r->val<=p->val){
            return false; 
        }
        p=r;
        return isBst(r->right,p);
    }
    bool isValidBST(TreeNode* root) {
        TreeNode* p=NULL;
        return isBst(root,p);
    }
};