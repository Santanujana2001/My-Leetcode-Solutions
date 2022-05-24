class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char,int>m,m2;
        for(auto i:s){
            m[i]++;
        }
        for(auto i:t){
            m2[i]++;
        }
        for(auto i:m2){
            if(m[i.first]!=i.second){
                return i.first;
            }
        }
        return {};
    }
};