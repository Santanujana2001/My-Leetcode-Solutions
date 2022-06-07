class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i=0,j=nums.size()-1;
        if(target<=nums[0]){
            return 0;
        }
        else if(target>nums[j]){
           return j+1;
        }
        while(i<j){
           int mid=i+(j-i)/2;
            if(target==nums[mid]){
                return mid;
            }
            else if(target>nums[mid]){
                i=mid+1;
            }
            else{
                j=mid;
            }
        }
        return j;
    }
};