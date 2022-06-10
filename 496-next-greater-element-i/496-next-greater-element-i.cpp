class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        bool p=true;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                p =true;
                if(nums2[j]==nums1[i]){
                    
                    if(j==nums2.size()-1 && p){
                            nums1[i]=-1;
                            p=false;
                            cout<<"hi2"<<endl;
                            break;
                        }
                    for(int k=j+1;j<nums2.size();k++){
                        if(nums2[k]>nums1[i]){
                            p=false;
                            nums1[i]=nums2[k];
                            cout<<"hi1"<<endl;
                            break;
                        }
                        if(k==nums2.size()-1 && p){
                            nums1[i]=-1;
                            p=false;
                            cout<<"hi2"<<endl;
                            break;
                        }
                    }
                }
                if(p==false){
                    cout<<"hi3"<<endl;
                    break; 
                }
            }
        }
        
        return nums1;
    }
};