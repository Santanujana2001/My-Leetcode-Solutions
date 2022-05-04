class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        int a=0;
        for(int i=0;i<nums.size();i++){
            if(m[k-nums[i]] >= 1){
                cout<<k-nums[i]<<endl;
                m[k-nums[i]]--;
                a++;
            }
            else{
                m[nums[i]]++;
            }
            
        }
        return a;
    }
};