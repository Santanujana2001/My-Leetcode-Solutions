class Solution {
public:
    int findMin(vector<int>& nums) {
        int s=0,e=nums.size()-1;
        if(nums[s]<nums[e]){
                return nums[s];
            }
        while(s<e){
            int m=(s+e)/2;
            if(nums[m]>=nums[e]){
                s=m+1;
            }
            else{
                e=m;
            }
        }
        return nums[s];
    }
};