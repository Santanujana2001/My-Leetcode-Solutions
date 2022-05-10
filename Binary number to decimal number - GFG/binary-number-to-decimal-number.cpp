// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
		int binary_to_decimal(string str)
		{
		    // Code here.
		     int dec =0;
		    int len = str.length();
		    for(int i=0;i<len;i++){
		        if(str[i]=='1') {
		            dec += pow(2,len-i-1);
		        }
		    }
		    
		    return dec;
		}
};

// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	string str;
    	cin >> str;
    	Solution ob;
    	int  ans = ob.binary_to_decimal(str);
    	cout << ans <<"\n";
    }
	return 0;
}  // } Driver Code Ends