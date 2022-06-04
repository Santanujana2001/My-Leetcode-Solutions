// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

const int N = 1e6;
class Solution{
public:
int primes[N];
void calculate()
{
    for(int i=2;i*i<N;i++)
    {
        if(primes[i]==0)
        for(int j=i*i;j<N;j+=i)
        {
            primes[j] = 1;
        }
    }
}
   long long int prime_Sum(int n){
       // Code here
       static int run = 0;
       if(run==0)
       {
           calculate();
           run++;
       }
       long long int sum = 0;
       for(long long int i=2;i<=n;i++)
       {
           if(primes[i]==0)
               sum+=i;
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
		long long int ans = ob.prime_Sum(n);
		cout << ans <<"\n";
	}  
	return 0;
}  // } Driver Code Ends