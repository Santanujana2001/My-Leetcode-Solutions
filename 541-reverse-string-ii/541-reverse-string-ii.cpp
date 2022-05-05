class Solution {
public:
    string reverseStr(string s, int k) {
        int i=0,j=s.length(),t,i1;
        while(i<j){
            t=min(i+k-1,j-1);
            i1=t+k+1;
            while(i<t){
                swap(s[i++],s[t--]);
            }
            i=i1;
        }
        return s;
    }
     
};