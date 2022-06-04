class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        vector<int> v;
        map<int,int>m;
        for(auto i:nums[0]){
            m[i]++;
        }
        for(int i=1;i<nums.size();i++){
            for(auto j:nums[i]){
                if(m[j]>=1){
                    
                    m[j]++;
                }
            }
        }
        int s=nums.size();
        for(auto i:m){
            // cout<<i.first<<" "<<i.second<<endl;
            if(i.second==s){
                v.push_back(i.first);
            }
        }
        return v;
    }
};