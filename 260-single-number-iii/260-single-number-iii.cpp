class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> v;
        map<int,int>m;
        for(auto i:nums){
            m[i]++;
        }
        for(auto i:m){
            if(i.second==1){
                v.push_back(i.first);
            }
        }
        return v;
    }
};