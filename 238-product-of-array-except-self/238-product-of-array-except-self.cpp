class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>v(n,0);
        int pre=1,post=1;
        for(int i=0;i<n;i++){
            v[i]=pre;
            pre*=nums[i];
        }
        for(int i=n-1;i>=0;i--){
            v[i]*=post;
            post*=nums[i];
        }
        return v;
    }
};