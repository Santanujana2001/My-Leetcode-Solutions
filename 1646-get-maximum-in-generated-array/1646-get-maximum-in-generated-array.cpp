class Solution {
public:
    int getMaximumGenerated(int n) {
        if(n==0||n==1){
            return n;
        }
        int maxi=-1;
        vector<int>nums(n+1,0);
        nums[0]=0;
        nums[1]=1;
        for(int i=2;i<=n;i++){
            if(i%2==0){
                nums[i]=nums[i/2];
            }
            else{
                nums[i]=nums[i/2]+nums[(i/2)+1];
            }
            maxi=max(maxi,nums[i]);
        }
        return maxi;
    }
};