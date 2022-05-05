class Solution {
public:
    string truncateSentence(string s, int k) {
        int t;
        for(int i=0;i<s.length();i++){
            if(s[i]==' '){
                k--;
            }
            if(!k){
                t=i;
                break;
            }
        }
        s.erase(s.begin()+t,s.end());
        return s;
    }
};