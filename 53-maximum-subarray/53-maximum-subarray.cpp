class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxm=INT_MIN,s=0;
        for(int i=0;i<nums.size();i++){
            s+=nums[i];
            maxm=max(s,maxm);
            if(s<0){
             s=0;
            }
        }
        return maxm;
    }
};