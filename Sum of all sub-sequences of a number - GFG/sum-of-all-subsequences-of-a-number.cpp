// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	

	int subsequenceSum(string s) 
	{
	    // Your code goes here
	   // the sum of all sub-sequence will be (sum of all the elements) * 2^n-1.
	   int sum=0;
	   int n=s.length();
	   for(int i=0;i<s.length();i++){
	       sum+=(s[i]-'0');
	   }
	   return sum*pow(2,n-1);
	}
};

// { Driver Code Starts.



int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   		Solution ob;

   		cout << ob.subsequenceSum(s) << "\n";
   	}

    return 0;
}  // } Driver Code Ends