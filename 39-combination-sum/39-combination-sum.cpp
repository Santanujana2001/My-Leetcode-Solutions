class Solution {
public:
    void findCombination(int ind,vector<int> &ds,vector<int> &arr,int target,vector<vector<int>> &ans){
    if(ind == arr.size()){
        if(target == 0){
            ans.push_back(ds);
        }
        return;
    }
    //pick that element
    if(arr[ind]<=target){
        ds.push_back(arr[ind]);
        findCombination(ind,ds,arr,target-arr[ind],ans);
        ds.pop_back();
    }
        
    findCombination(ind+1,ds,arr,target,ans);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
         vector<vector<int>> ans;
         vector<int> ds;
         findCombination(0,ds,candidates,target,ans);
         return ans;
        }
};