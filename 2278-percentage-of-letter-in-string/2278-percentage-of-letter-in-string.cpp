class Solution {
public:
    int percentageLetter(string s, char letter) {
        int occur = 0;
        for(int i=0;i<s.length();i++){
            if(s[i]==letter){
                occur++;
            }
        }
        int per=(occur*100)/s.length();
        return per;
    }
};