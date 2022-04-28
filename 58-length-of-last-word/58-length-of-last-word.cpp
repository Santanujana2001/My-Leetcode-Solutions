class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans=0,l=s.length()-1,i;
        while(s[l]==' '){
            l--;
        }
        i=l;
        while(l>=0 && s[l]!=' '){
            l--;
        }
        return i-l;
    }
};