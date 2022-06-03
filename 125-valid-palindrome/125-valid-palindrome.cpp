class Solution {
public:
    bool isPalindrome(string s) {
        string f="";
        for(int i=0;i<s.length();i++){
            if(isalnum(s[i])){
                f+=tolower(s[i]);
            }
        }
        string l="";
        for(int i=s.length()-1;i>=0;i--){
            if(isalnum(s[i])){
                l+=tolower(s[i]);
            }
        }
        cout<<f<<" "<<l;
        return f==l;
    }
};