class Solution {
public:
    bool canJump(vector<int>& nums) {
        int reachind=0;
        int i=0;
        for(;i<nums.size();i++){
            // cout<<reachind<<" "<<i+nums[i]<<endl;
          if(i>reachind){
              return 0;
          }
            reachind=max(reachind,i+nums[i]);
        }
            // return i==nums.size();
        cout<<i<<" "<<nums.size();
        return 1;
    }

};