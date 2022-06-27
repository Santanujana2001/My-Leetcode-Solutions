class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        if(nums.size()==2){
            int maxi=*max_element(nums.begin(),nums.end());
            return maxi;
        }
        vector<int>v(nums.size(),0);
        v[0]=nums[0];
        v[1]=max(nums[0],nums[1]);
        for(int i=2;i<nums.size();i++){
            v[i]=max(nums[i]+v[i-2],v[i-1]);
        }
        return v.back();
    }
};