class Solution {
public:
    void solve(vector<int>& nums,vector<vector<int>>&ans,int ind,vector<int>vec){
        if(ind>=nums.size()){
            ans.push_back(vec);
            return ;
        }
//         exclude part
        solve(nums,ans,ind+1,vec);
//         include part
        vec.push_back(nums[ind]);
        solve(nums,ans,ind+1,vec);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
       vector<vector<int>>ans;
        vector<int>vec;
        int ind=0;
        solve(nums,ans,ind,vec);
        return ans;
    }
};