class Solution {
public:
    vector<vector<int>>v;
    void ans(vector<int>& nums,int k){
        if(k==nums.size()){
            v.push_back(nums);
            return;
        }
        for(int i=k;i<nums.size();i++){
            swap(nums[i],nums[k]);
            ans(nums,k+1);
            swap(nums[i],nums[k]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        ans(nums,0);
        return v;
    }
};