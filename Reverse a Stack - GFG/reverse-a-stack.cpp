// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
public:
void inatb(stack<int> &s,int n){
    if(s.empty()){
        s.push(n);
        return;
    }
    int num=s.top();
    s.pop();
    inatb(s,n);
    s.push(num);
}
void rev (stack<int> &s){
    if(s.empty()){
        return;
    }
    int n=s.top();
    s.pop();
    rev(s);
    inatb(s,n);
}
    vector<int> Reverse(stack<int> &St){
        rev(St);
        vector<int> v;
        while(!St.empty()){
            int m=St.top();
            v.push_back(m);
            St.pop();
        }
        reverse(v.begin(),v.end());
        return v;
    }
};

// { Driver Code Starts.


int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        stack<int> St;
        for(int i=0;i<N;i++){
            int x;
            cin>>x;
            St.push(x);
        }
        Solution ob;
        vector<int> ans=ob.Reverse(St);
        for(int i=0;i<N;i++){
            cout<<ans[i];
            if(i!=N-1) cout<<" ";
        }
        cout<<endl;
    }
}  // } Driver Code Ends