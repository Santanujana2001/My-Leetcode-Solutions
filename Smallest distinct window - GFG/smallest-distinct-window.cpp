// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    int findSubString(string str)
   {
       // Your code goes here   
       unordered_map<char, int> M;
       for(int i = 0;i<str.size();i++)
       {
           if(M.find(str[i])==M.end())
           {
               M.insert({str[i], 1});
           }
       }
       int n = M.size();
       unordered_map<char, int> newMap;
       int i = 0;
       int j = 0;
       int ans = INT_MAX;
       while(i<str.size())
       {
           if(M.find(str[i])!=M.end())
           {
               newMap[str[i]]++;
           }
           else
           {
               newMap.insert({str[i],1});
           }
           i++;
           
           while(newMap.find(str[j])!=M.end() && newMap[str[j]]>1)
           {
               newMap[str[j]]--;
               j++;
           }
           if(newMap.size()==n)
           {
               ans = min(ans, i-j+1);
           }
       }
       return ans-1;
   }
};

// { Driver Code Starts.
// Driver code
int main() {
    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        Solution ob;
        cout << ob.findSubString(str) << endl;
    }
    return 0;
}  // } Driver Code Ends