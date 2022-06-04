class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
//         stefanpochmann's solution 
        map<int,int>m;
        vector<int> v;
        for(auto i:nums1){
            m[i]++;
        }
        for(auto i:nums2){
            if(m[i]>0){
                v.push_back(i);
                m[i]--;
            }
        }
        return v;
    }
};