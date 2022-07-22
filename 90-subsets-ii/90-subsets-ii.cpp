class Solution {
public:
    void solve(vector<int>& nums,set<vector<int>>&ans,int ind,vector<int>vec){
        if(ind==nums.size()){
            ans.insert(vec);
            return ;
        }
//         exclude part
        solve(nums,ans,ind+1,vec);
//         include part
        vec.push_back(nums[ind]);
        sort(vec.begin(),vec.end()); // 3rd change - sort the vector to avoid the duplicates which are unsorted
        solve(nums,ans,ind+1,vec);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>>ans; // 1st change - take set of vectors to avoid collecting duplicates 
        vector<vector<int>>v; // 2nd change - now this is the answer vectors
        vector<int>vec;
        int ind=0;
        solve(nums,ans,ind,vec);
        for(auto i:ans){
            v.push_back(i); // Copying The Elements From The Set To Vector Of Vectors
        }
        return v;
    }
};