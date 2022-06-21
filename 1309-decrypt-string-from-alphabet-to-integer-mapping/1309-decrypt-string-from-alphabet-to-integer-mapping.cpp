class Solution {
public:
    string freqAlphabets(string s) {
        // string a="26";
        // // single string cout<<a[i]-'0'-1+'a';
        // // cout<<(s[i]-'0')*10 + (s[i+1]-'0');
        // double string int c=(s[0]-'0')*10 + (s[1]-'0');
        // cout<<c<<endl;
        // cout<<c+'a'-1<<endl;
        // cout<<char(c+'a'-1);
        string a="";
        int t;
        for(int i=0;i<s.length();i++){
            if(i+2<s.length() && s[i+2]=='#'){
               t=(s[i]-'0')*10+(s[i+1]-'0');
                a+=char(t-1+'a');
                i+=2;
            }
            else{
                a+=char(s[i]-'0'-1+'a');
            }
        }
        return a;
    }
};