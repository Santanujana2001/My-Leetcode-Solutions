// { Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    //Function to find minimum number of pages.
    bool ispos(int a[], int n, int m,int mid){
        int scount=1,psum=0;
        for(int i=0;i<n;i++){
            if(psum+a[i]<=mid){
                psum+=a[i];
            }
            else{
                scount++;
                if(scount>m || a[i]>mid){
                    return false;
                }
                psum=a[i];
            }
        }
        return true;
    }
    int findPages(int a[], int n, int m) 
    {
        int s=0;
        int e =0,ans=-1;
        e = accumulate(a,a+n,e);
        while(s<=e){
            int mid=s+(e-s)/2;
            if(ispos(a,n,m,mid)){
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}
  // } Driver Code Ends