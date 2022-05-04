class Solution {
public:
    string toLowerCase(string s) {
       int i=0,j=s.length()-1;
        while(i<=j){
            s[i]=tolower(s[i]);
            s[j]=tolower(s[j]);
            i++;
            j--;
        }
        return s;
    }
};