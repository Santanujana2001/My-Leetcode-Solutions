class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int mini=INT_MAX,prefixsum=0;
        for(int i=0;i<nums.size();i++){
            prefixsum+=nums[i];
            mini=min(mini,prefixsum);
        }
        if(mini<0){
            return 1-mini;
        }
        return 1;
    }
};