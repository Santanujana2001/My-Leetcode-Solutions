// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
#include <string>

using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to find list of all words possible by pressing given numbers.
    void solve(int a[], string out, int ind, vector<string> &ans, string mapp[],int n){
        if(ind==n){
            ans.push_back(out);
            return;
        }
        string letters=mapp[a[ind]];
        for(int i=0;i<letters.length();i++){
            out.push_back(letters[i]);
            solve(a, out, ind+1, ans, mapp,n);
            out.pop_back();
        }
        return ;
    }
    vector<string> possibleWords(int a[], int N)
    {
         vector<string> ans;
        if (N == 0)
        {
            return ans;
        }
        string out;
        string mapp[10] = { "",
            "",
            "abc",
            "def",
            "ghi",
            "jkl",
            "mno",
            "pqrs",
            "tuv",
            "wxyz" };
        solve(a, out, 0, ans, mapp,N);
        return ans;
    }
};


// { Driver Code Starts.

int main() {
  
	int T;
	
	cin >> T; //testcases
	
	while(T--){ //while testcases exist
	   int N;
	    
	   cin >> N; //input size of array
	   
	   int a[N]; //declare the array
	   
	   for(int i =0;i<N;i++){
	       cin >> a[i]; //input the elements of array that are keys to be pressed
	   }
	   
	   Solution obj;
	   
	  vector <string> res = obj.possibleWords(a,N);
	  for (string i : res) cout << i << " ";
	   cout << endl;
	}
	
	return 0;
}  // } Driver Code Ends