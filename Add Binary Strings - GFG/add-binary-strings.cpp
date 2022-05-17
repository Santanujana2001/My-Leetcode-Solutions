// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	string addBinary(string a, string b)
	{
	    string ans;
        int i=a.length()-1,j=b.length()-1,carry=0,sum;
        while(i>=0||j>=0){
            sum=carry;
            if(i>=0){
                sum+=a[i--]-'0';
            }
            if(j>=0){
                sum+=b[j--]-'0';
            }
            if(sum>1){
                carry=1;
            }
            else{
                carry=0;
            }
           ans += to_string(sum % 2);
        }
        if(carry>0){
            ans += to_string(carry);
        }
        for(int g=ans.length()-1;g>=0;g--){
            if(ans[g]=='1'){
                break;
            }
            else{
                 ans.pop_back();
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
	}
};

// { Driver Code Starts.

int main()
{
	int t; cin >> t;
	while (t--)
	{
		string A, B; cin >> A >> B;
		Solution ob;
		cout << ob.addBinary (A, B);
		cout << "\n";
	}
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends