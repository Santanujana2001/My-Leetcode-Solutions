class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int c=0;
        for(auto i:words){
            if(!s.find(i)){
                c++;
            }
        }
        return c;
    }
};