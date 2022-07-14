class Solution {
public:
    bool isIsomorphic(string s, string t) { 
       int m1[150]={0},m2[150]={0};
        for(int i=0;i<s.length();i++){
            if( m1[s[i]]!=m2[t[i]]){
                return false;
            }
            m1[s[i]]=i+1;
            m2[t[i]]=i+1;
        }
        return true;
    }
};