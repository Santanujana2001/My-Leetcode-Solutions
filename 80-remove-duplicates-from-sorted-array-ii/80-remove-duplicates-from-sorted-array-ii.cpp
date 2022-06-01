class Solution {
public:
//     learnt this from discussion 
    int removeDuplicates(vector<int>& nums) {
        int ind=0;
        for(auto i:nums){
            if(ind<2 ||i>nums[ind-2]){
                nums[ind++]=i;
            }
        }
        return ind;
    }
};