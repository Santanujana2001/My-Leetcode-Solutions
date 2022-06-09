// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution

{
    vector<vector<int>>v;
    void solve(vector<int> a,vector<int>t,int ind){
        if(ind==a.size()){
            v.push_back(t);
            return;
        }
        t.push_back(a[ind]);
        solve(a,t,ind+1);
        t.pop_back();
        solve(a,t,ind+1);
        return;
    }
    public:
    vector<vector<int> > subsets(vector<int>& a)
    {
        vector<int>t;
        solve(a,t,0);
        sort(v.begin(),v.end());
        return v;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n, x;
		cin >> n;

		vector<int> array;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			array.push_back(x);
		}
        
        
        Solution ob;
		vector<vector<int> > res = ob.subsets(array);

		// Print result
		for (int i = 0; i < res.size(); i++) {
			for (int j = 0; j < res[i].size(); j++)
				cout << res[i][j] << " ";
			cout << endl;
		}

		
	}

	return 0;
}  // } Driver Code Ends