class Solution {
public:
    void solve(vector<int>& nums,set<vector<int>>&ans,int ind,vector<int>vec){
        if(ind>=nums.size()){
            ans.insert(vec);
            return ;
        }
//         exclude part
        solve(nums,ans,ind+1,vec);
//         include part
        vec.push_back(nums[ind]);
        sort(vec.begin(),vec.end());
        solve(nums,ans,ind+1,vec);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>>ans;
        vector<vector<int>>v;
        vector<int>vec;
        int ind=0;
        solve(nums,ans,ind,vec);
        for(auto i:ans){
            v.push_back(i);
        }
        return v;
    }
};