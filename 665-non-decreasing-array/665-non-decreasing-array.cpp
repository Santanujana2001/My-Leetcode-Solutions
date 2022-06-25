class Solution {
public:
//     learnt from discussion
    bool checkPossibility(vector<int>& nums) {
        for(int i=0;i+1<nums.size();i++){
            if(nums[i]>nums[i+1]){
                if(i>0 && nums[i-1]>nums[i+1]){
                    nums[i+1]=nums[i];
                }
                else{
                    nums[i]=nums[i+1];
                }
                break;
            }
        }
        for(int i=0;i+1<nums.size();i++){
            if(nums[i]>nums[i+1]){
                return false;
            }
        }
        return true;
    }
};