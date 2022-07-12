class Solution {
public:
    bool solve(vector<int>& matchsticks,vector<int>&v,int targ,int cursum,int i, int k){
        if(k==1){
            return true;
        }
        if(targ==cursum){
            return solve(matchsticks,v,targ,0,0,k-1);
        }
        for(int j=i;j<matchsticks.size();j++){
            if(v[j]||matchsticks[j]+cursum>targ){
                continue;
            }
            v[j]=1;
            if(solve(matchsticks,v,targ,matchsticks[j]+cursum,j+1,k)){
                return true;
            }
            v[j]=0;
        }
        return false;
    }
    bool makesquare(vector<int>& matchsticks) {
        int sum=0;
        sum=accumulate(matchsticks.begin(),matchsticks.end(),0);
        if(matchsticks.size()<4 || sum%4){
            return false;
        }
        vector<int>v(matchsticks.size(),0);
        return solve(matchsticks,v,sum/4,0,0,4);
    }
};