class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int c=0;
       for(auto i:words){
           if(!i.find(pref)){
               c++;
           }
       }
        return c;
    }
};