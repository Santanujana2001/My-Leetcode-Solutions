class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        unordered_map<char,int>m1,m2;
        for(auto i:s){
            m1[i]++;
        }
        for(auto i:t){
            m2[i]++;
        }
        for(auto i:m1){
            if(m2[i.first]!=i.second){
                return false;
            }
        }
        return true;
    }
};