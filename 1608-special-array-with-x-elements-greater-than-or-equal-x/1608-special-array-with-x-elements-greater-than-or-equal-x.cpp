class Solution {
public:
    int specialArray(vector<int>& nums) {
        int c=0;
        for(int i=1;i<=1000;i++){
            c=0;
            for(int j=0;j<nums.size();j++){
                if(nums[j]>=i){
                    c++;
                }
            }
            if(c==i){
                return i;
            }
        }
        return -1;
    }
};