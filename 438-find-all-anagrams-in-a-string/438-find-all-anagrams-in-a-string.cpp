class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>v;
        vector<int>v1(26,0);
        vector<int>v2(26,0);
        int l1=p.length();
        int l2=s.length();
        if(l1>l2){
            return v;
        }
        int l=0,r=0;
        while(r<l1){
            v1[p[r]-'a']++;
            v2[s[r]-'a']++;
            r++;
        }
        r--;
        while(r<l2){
            if(v1==v2){
                v.push_back(l);
            }
            r++;
            if(r<l2){
                 v2[s[r]-'a']++;
                 v2[s[l]-'a']--;
            }
            l++;
        }
        return v;
    }
};