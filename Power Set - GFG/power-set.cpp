// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
	
	void solve(string s,vector<string>&v, string t,int ind){
	    if(ind==s.size()){
	        if(t!=""){
	             v.push_back(t);
	        }
	        return;
	    }
	    solve(s,v,t+s[ind],ind+1);
	    solve(s,v,t,ind+1);
	    return;
	}
		vector<string> AllPossibleStrings(string s){
		   vector<string>v;
		   solve(s,v,"",0);
		   sort(v.begin(),v.end());
		   return v;
		}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}  // } Driver Code Ends