class Solution {
public:
    void sortColors(vector<int>& nums) {
        int one=0,zero=0;
        for(auto i:nums){
            if(i==0){
                zero++;
            }
            else if(i==1){
                one++;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(zero){
                zero--;
                nums[i]=0;
            }
            else if(one){
                one--;
                nums[i]=1;
            }
            else{
                nums[i]=2;
            }
        }
    }
};