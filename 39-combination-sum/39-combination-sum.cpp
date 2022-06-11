class Solution {
public:
    vector<vector<int>>v;
    void solve(vector<int>& c, int target,int i,int cursum,vector<int>t){
        if(cursum>target){
            return ;
        }
        if(i==c.size()){
            if(cursum==target){
                v.push_back(t);
            }
            return ;
        }
        solve(c,target,i+1,cursum,t);
        cursum+=c[i];
        t.push_back(c[i]);
        solve(c,target,i,cursum,t);
        return;
        
    }
    vector<vector<int>> combinationSum(vector<int>& c, int target) {
       vector<int>t;
        solve(c,target,0,0,t);
        return v;
    }
};