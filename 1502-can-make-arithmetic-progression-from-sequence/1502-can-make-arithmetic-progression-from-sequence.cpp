class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int d=arr[1]-arr[0];
        for(int i=0;i+1<arr.size();i++){
            int nd=arr[i+1]-arr[i];
            if(nd!=d){
                return 0;
            }
        }
        return 1;
    }
};