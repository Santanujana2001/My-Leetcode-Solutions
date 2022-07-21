class Solution {
public:
//     striver is awesome
    vector<vector<int>>v;
    void solve(int ind,vector<int>& c, int target,vector<int>temp){
        if(target==0){
            v.push_back(temp);
            return;
        }
        for(int i=ind;i<c.size();i++){
            if(i>ind && c[i]==c[i-1]){
                continue;
            }
            if(c[i]>target){
                break;
            }
            temp.push_back(c[i]);
            solve(i+1,c,target-c[i],temp);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& c, int t) {
        sort(c.begin(),c.end());
        vector<int>temp;
        solve(0,c,t,temp);
        return v;
    }
};