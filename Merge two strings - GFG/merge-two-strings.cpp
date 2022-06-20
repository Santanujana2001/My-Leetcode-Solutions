// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

string merge (string s1, string s2);

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s1; cin >> s1;
        string s2; cin >> s2;

        cout << merge (s1, s2) << endl;
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends



string merge (string S1, string S2)
{
    int m=S1.length(),n=S2.length(),i=0,j=0,k=0;
    string s =""; 
    while(i<m&&j<n){
        s.push_back(S1[i++]);
        s.push_back(S2[j++]);
    }
    while(i<m){
        s.push_back(S1[i++]);
    }
    while(j<n){
        s.push_back(S2[j++]);
    }
    return s;
}