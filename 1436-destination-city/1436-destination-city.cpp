class Solution {
public:
    string destCity(vector<vector<string>>& p) {
        map<string,int>m;
        for(auto i:p){
            m[i[0]]++;
        }
        for(auto i:p){
           if(m[i[1]]==0){
               return i[1];
           }
        }
        return "NULL";
    }
};