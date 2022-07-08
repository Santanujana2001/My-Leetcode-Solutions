class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> v;
        unordered_map <int,int> t;
        for(int i=0;i<nums.size();i++){
            int f=target-nums[i];
            if(t.find(f)!=t.end()){
                v.push_back(i);
                v.push_back(t[f]);
                    return v;
            }
            t[nums[i]]=i;
             }
        return v;
        }
        
};