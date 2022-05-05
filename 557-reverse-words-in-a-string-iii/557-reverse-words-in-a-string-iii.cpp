class Solution {
public:
    string reverseWords(string s) {
        int st,e;
        cout<<(int)s.length()<<endl;
        for(int i=0;i<s.length();){
             st=i,e=i;
            while(s[e]!=' ' && e!=s.length()-1){
                e++;
            }
            
            i=e+1;
            if(e<s.length()-1){
                e--;
            }
            
            cout<<s[i]<<endl;
            
            while(st<e){
                swap(s[st++],s[e--]);
            }
        }
        return s;
    }
};