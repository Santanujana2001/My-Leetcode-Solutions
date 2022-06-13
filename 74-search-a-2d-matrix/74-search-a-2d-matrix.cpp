class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i=0;i<matrix.size();i++){
            int s=0,e=matrix[i].size()-1;
            while(s<=e){
                int m=(s+e)/2;
                if(matrix[i][m]==target){
                    return true;
                }
                else if(target>matrix[i][m]){
                    s=m+1;
                }
                else{
                    e=m-1;
                }
            }
        }
        return false;
    }
};