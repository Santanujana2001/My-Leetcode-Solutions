class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>v1(26,0);
        vector<int>v2(26,0);
        int l1=s1.length();
        int l2=s2.length();
        if(l1>l2){
            return 0;
        }
        int l=0,r=0;
        while(r<l1){
            v1[s1[r]-'a']++;
            v2[s2[r]-'a']++;
            r++;
        }
        r--;
        while(r<l2){
            if(v1==v2){
                return 1;
            }
            r++;
            if(r<l2){
                 v2[s2[r]-'a']++;
                 v2[s2[l]-'a']--;
            }
            l++;
        }
        return 0;
    }
};