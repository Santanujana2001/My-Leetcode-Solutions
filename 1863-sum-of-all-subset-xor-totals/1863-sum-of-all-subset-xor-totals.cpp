class Solution {
public:
    int c=0;
    void solve(int i,vector<int> v,vector<int> nums,int n){
        if(i==n){
            if(!v.empty()){
               int cur=v[0];
            // int cur=0;
            for(int j=1;j<v.size();j++){
                cur^=v[j];
            }
            c+=cur; 
            }
            
            return;
        }
        solve(i+1,v,nums,n);
        v.push_back(nums[i]);
        solve(i+1,v,nums,n);
        return;
    }
    int subsetXORSum(vector<int>& nums) {
        vector<int> v;
        int n=nums.size();
        solve(0,v,nums,n);
        return c;
    }
};