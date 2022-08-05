class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n=nums.size();
       vector<int>v(n);
        int sum =accumulate(nums.begin(),nums.end(),0);
        int lnum=0,rnum=0,lsum=0,rsum=0;
        for(int i=0;i<nums.size();i++){
            rnum=n-(lnum+1);
            rsum=sum-(lsum+nums[i]);
            v[i]=((lnum*nums[i])-lsum)+(rsum-(rnum*nums[i]));
            lnum++;
            lsum+=nums[i];
        }
        return v;
    }
};