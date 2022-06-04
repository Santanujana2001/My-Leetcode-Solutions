// { Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


string reverseWord(string str);


int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}

// } Driver Code Ends


//User function Template for C++
void solve(string &str,int i,int j){
    if(i>=j){
        return;
    }
    swap(str[i],str[j]);
    solve(str,i+1,j-1);
}
string reverseWord(string str){
    solve(str,0,str.length()-1);
  return str;
}