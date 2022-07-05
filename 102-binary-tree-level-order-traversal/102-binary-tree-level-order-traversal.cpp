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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>v;
        if(!root){
            return v;
        }
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            vector<int>temp;
            for(int i=0;i<size;i++){
                TreeNode* t=q.front();
                q.pop();
                if(t->left){
                  q.push(t->left);
                }
                if(t->right){
                    q.push(t->right);
                }
                temp.push_back(t->val);
            }
            v.push_back(temp);
        }
        return v;
    }
};