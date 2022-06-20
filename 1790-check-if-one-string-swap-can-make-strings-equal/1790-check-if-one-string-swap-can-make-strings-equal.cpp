class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int d=0;
        for(int i=0;i<s1.length();i++){
            if(s1[i]!=s2[i]){
                d++;
            }
        }
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
//         The answer is false if the number of nonequal positions in the strings is not equal to 0 or 2.
        if(d==0||d==2){
//         Checking If Both Strings Contain Same Character
            return s1==s2;
        }
        return 0;
    }
};