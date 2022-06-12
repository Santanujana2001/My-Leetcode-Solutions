class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int maxi=INT_MIN,left=0,sum=0;
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            if(m.find(nums[i])!=m.end()){
                while(left<=m[nums[i]]){
                    // cout<<left <<" "<<nums[i]<<" "<< m[nums[i]]<<endl;
                    sum-=nums[left++];
                }
            }
            m[nums[i]]=i;
            sum+=nums[i];
            maxi=max(sum,maxi);
        }
        return maxi;
    }
};