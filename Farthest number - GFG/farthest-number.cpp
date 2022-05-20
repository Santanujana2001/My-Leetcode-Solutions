// { Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++
class Solution{   
  public:
    vector<int> farNumber(int n,vector<int> a){
        vector<int> v;
        int j=n-1;
        for(int i=0;i<n;i++){
            
            if(i==n-1){
                v.push_back(-1);
            }
            while(i<j){
                
            if(a[i]>a[j]){
                v.push_back(j);
                j=n-1;
                break;
            }
            else if(i==j-1){
                v.push_back(-1);
                j=n-1;
                break;
                
            }
            else{
                j--;
            }
            
        }
            
        }
        return v;
    }
};

// { Driver Code Starts.
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        vector<int> Arr(N);
        for(int i=0;i<N;i++)
            cin>>Arr[i];
        Solution obj;
        vector<int> answer=obj.farNumber(N,Arr);
        for(auto i:answer)
            cout<<i<<" ";
        cout<<endl;
  }
}  // } Driver Code Ends