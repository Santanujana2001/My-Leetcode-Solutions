class Solution {
public:
    vector<vector<int>>v;
    void solve(int n, int k,vector<int>cm){
        if(!k){
            v.push_back(cm);
            return;
        }
        if(n>k){
            solve(n-1,k,cm);
        }
        cm.push_back(n);
        solve(n-1,k-1,cm);
        return;
    }
    
    vector<vector<int>> combine(int n, int k) {
        vector<int>cm;
        solve(n,k,cm);
        return v;
     }
};