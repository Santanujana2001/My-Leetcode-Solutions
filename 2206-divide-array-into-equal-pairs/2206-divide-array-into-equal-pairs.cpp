class Solution {
public:
    bool divideArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int sum=0;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                sum+=nums[i];
            }
            else{
                sum-=nums[i];
            }
        }
        return !sum;
    }
};