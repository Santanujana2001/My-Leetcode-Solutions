class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>s1,s2;
        vector<vector<int>> v;
        vector<int>t;
        for(auto i:nums1){
            s1.insert(i);
        }
        for(auto i:nums2){
            s2.insert(i);
        }
        for(auto i:s1){
            if(s2.find(i)==s2.end()){
                t.push_back(i);
            }
        }
        v.push_back(t);
        t.clear();
        for(auto i:s2){
            if(s1.find(i)==s1.end()){
                t.push_back(i);
            }
        }
        v.push_back(t);
        return v;
    }
};