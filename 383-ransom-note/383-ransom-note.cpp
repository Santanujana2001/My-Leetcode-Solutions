class Solution {
public:
    bool canConstruct(string r, string ma) {
        map<char,int>m;
        for(auto i:ma){
            m[i]++;
        }
        for(auto i:r){
            if(m[i]<=0){
                return 0;
            }
           m[i]--; 
        }
        return 1;
    }
};