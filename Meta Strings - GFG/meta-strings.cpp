// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
bool metaStrings (string s1, string s2);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s1; cin >> s1;
        string s2; cin >> s2;

        cout << metaStrings (s1, s2) << endl;
    }
}
// Contributed By: Pranay Bansal
// } Driver Code Ends



bool metaStrings (string S1, string S2)
{
 int d=0;
 for(int i=0;i<S1.length();i++){
     if(S1[i]!=S2[i]){
         d++;
     }
 }
 sort(S1.begin(),S1.end());
 sort(S2.begin(),S2.end());
 if(d==2){
     return S1==S2;
 }
 return 0;
}