// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    unsigned int countSetBits(int n)
   {
       unsigned int count = 0;
       while (n) {
           n &= (n - 1);
           count++;
       }
       return count;
   }
   int minVal(int a, int b) {
      int setbitsofB=countSetBits(b);
      int res=0;
      for(int i=31;i>=0;i--)
      {
          if(setbitsofB==0)
          {
            break;   
           }
          if((a&(1<<i)))
          {
              res=(res|(1<<i));
              setbitsofB--;
          }
      }
      for(int i=0;i<32;i++)
      {
          if(setbitsofB==0)
            break;
         if((a&(1<<i))==0)
          {
              res=(res|(1<<i));
              setbitsofB--;
          }
          
      }
      
      return res;
   }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;

        Solution ob;
        cout << ob.minVal(a, b);

        cout << "\n";
    }

    return 0;
}  // } Driver Code Ends