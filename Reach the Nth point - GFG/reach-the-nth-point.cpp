// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
		int nthPoint(int n){
		    if (n==1){
		        return 1;
		    }
		    else if(n==2){
		        return 2;
		    }
		    int f=1,s=2,sum=0;
		    for(int i=3;i<=n;i++){
		        sum=(f+s)%(1000000007);
		        f=s;
		        s=sum;
		    }
		    return sum;
		}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans  = ob.nthPoint(n);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends