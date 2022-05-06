// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    vector<int> increment(vector<int> arr ,int N) {
        // code here
        int add =1,rem;
        for(int i=arr.size()-1;i>=0;i--){
            if(add==0){
                break;
            }
            else{
            arr[i]=(arr[i]+add)%10;
                (arr[i]==0) ? add=1 : add=0; 
            }
             
        }
        if(add==1){
            arr.insert(arr.begin(),1);
        }
        return arr;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        char c;
        
        cin>>N;
        vector<int> arr(N);
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        vector<int> res = ob.increment(arr,N);
        for(int i: res)
            cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends