// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string firstRepChar(string s);
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<firstRepChar(s)<<endl;
    }
	return 0;
}// } Driver Code Ends


string firstRepChar(string s)
{   string a="";
    unordered_map<char,int>m;
    for(int i=0;i<s.length();i++){
        if(m[s[i]]>0){
            return a+s[i];
        }
        m[s[i]]++;
    }
    return "-1";
}