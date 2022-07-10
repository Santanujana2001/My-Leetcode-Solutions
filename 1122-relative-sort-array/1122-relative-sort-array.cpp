class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int>all;
        for(auto i:arr1){
            all[i]++;
        }
        int start=0;
        for(auto i:arr2){
            while(all[i]!=0){
                arr1[start++]=i;
                all[i]--;
            }
        }
        for(auto i:all){
            while(i.second!=0){
                arr1[start++]=i.first;
                i.second--;
            }
        }
        return arr1;
    }
};