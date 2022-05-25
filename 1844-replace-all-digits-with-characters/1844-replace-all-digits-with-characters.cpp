class Solution {
public:
    string replaceDigits(string s) {
        for(auto i=1;i<s.length();i+=2){
            // s[i]=s[i-1] + s[i]-'0';
                     
                        // OR
               
                s[i] += s[i-1] -'0';
        }
        return s;
    }
};