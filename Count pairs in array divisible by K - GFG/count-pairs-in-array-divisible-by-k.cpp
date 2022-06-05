// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    long long countKdivPairs(int a[], int n, int k){
        unordered_map<long long, long long> mp;
        long long ans=0;
        
        for(int i=0;i<n;i++){
            long long curr_mod= a[i]%k;
            if(curr_mod==0){
                ans+= mp[0];
                // cout<<mp[0]<<endl;
            } else{
                long long req_mod= k-a[i]%k;
                ans+= mp[req_mod];
                // cout<<mp[req_mod]<<endl;
            }
            mp[curr_mod]++;
        }
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		int a[n];
		for (int i = 0; i < n; i++)
			cin >> a[i];

		int k;
		cin >> k;

        Solution ob;
		cout << ob. countKdivPairs(a, n , k) << "\n";



	}


	return 0;
}
  // } Driver Code Ends