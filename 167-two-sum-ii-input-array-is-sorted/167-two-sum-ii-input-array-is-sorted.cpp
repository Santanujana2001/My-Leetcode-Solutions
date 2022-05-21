class Solution {
public:
    vector<int> twoSum(vector<int>& n, int target) {
       vector<int> v;
        unordered_map<int,int> m;
        for(int i=0;i<n.size();i++){
            if(m.find(target-n[i])!=m.end()){
                int g=m[target-n[i]];
                v.push_back(g+1);
                v.push_back(i+1);
            }
            m[n[i]]=i;
        }
        return v;
    }
};