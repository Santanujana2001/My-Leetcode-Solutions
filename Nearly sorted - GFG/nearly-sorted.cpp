// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to return the sorted array.
    vector <int> nearlySorted(int arr[], int num, int K){
        priority_queue <int, vector <int>, greater <int>> p1;
      vector <int> v;
      
      for(int i=0; i<num; i++)
      {
          p1.push(arr[i]);
          if(p1.size()==K+1)
          {
              v.push_back(p1.top());
              p1.pop();
          }
      }
      while(!p1.empty())
      {
          v.push_back(p1.top());
          p1.pop();
      }
      
      return v;
    }
};

// { Driver Code Starts.

int main()
 {
	int T;
	cin>> T;
	
	while (T--)
	{
	    int num, K;
	    cin>>num>>K;
	    
	    int arr[num];
	    for(int i = 0; i<num; ++i){
	        cin>>arr[i];
	    }
	    Solution ob;
	    vector <int> res = ob.nearlySorted(arr, num, K);
	    for (int i = 0; i < res.size (); i++)
	        cout << res[i] << " ";
	        
	    cout<<endl;
	}
	
	return 0;
}
  // } Driver Code Ends