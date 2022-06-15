class Solution {
public:
    int bin (vector<int>& nums,int st,int en, int target){
        int mi,an=-1;
        while(st<=en){
            mi=(st+en)/2;
            if(target==nums[mi]){
                an=mi;
                break;
            }
            else if(target>nums[mi]){
                st=mi+1;
            }
            else{
                en=mi-1;
            }
        }
        return an;
    }
    int search(vector<int>& nums, int target) {
        int s=0,e=nums.size()-1,m;
        while(s<e){
            m=(s+e)/2;
            if(nums[m]>=nums[0]){
                s=m+1;
            }
            else{
                e=m;
            }
        }
        cout<<nums[s];
        e=nums.size()-1;
        if(target>=nums[s] && target<=nums[e]){
            cout<<"ho";
            return bin(nums,s,e,target);
        }
        else{
             cout<<"hi";
            return bin(nums,0,s-1,target);
        }
        return -1;
    }
};