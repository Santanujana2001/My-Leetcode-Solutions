// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int kthDigit(int A,int B,int K){
        long long a=pow(A,B);
        if(a<10){
            return a;
        }
        while(a){
            K--;
            // cout<<a%10<<endl;
            if(K==0){
                return a%10;
            }
            a/=10;
        }
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        long long int A,B,K;
        cin>>A>>B>>K;
        Solution ob;
        cout << ob.kthDigit(A,B,K) << endl;
    }
    return 0; 
}  // } Driver Code Ends