class Solution {
public:
    int bs(vector<int>& nums2,int s,int t){
        int e=nums2.size()-1,ans=-1;
        while(s<=e){
            int m = (s+e)/2;
            if(nums2[m]<t){
                e=m-1;
            }
            else{
                ans=m;
                s=m+1;
            }
        }
        return ans;
    }
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int maxi=0;
        for(int i=0;i<nums1.size();i++){
            int j=bs(nums2,i,nums1[i]);
            if(j!=-1){
                maxi=max(maxi,j-i);
            }
        }
        return maxi;
    }
};