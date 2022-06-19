class Solution {
public:
    int diagonalSum(vector<vector<int>>& m) {
        int sum=0;
        for(int i=0;i<m[0].size();i++){
            sum+=m[i][i];
            cout<<m[i][i];
        }
        cout<<endl;
        for(int i=m[0].size()-1,j=0;i>=0 && j<m.size();i--,j++){
            sum+=m[j][i];
             cout<<m[j][i];
        }
        int n=m.size();
        if(n%2){
            n/=2;
            sum-=m[n][n];
        }
        return sum;
    }
};
// 1 1 1 1
// 1 1 1 1
// 1 1 1 1
// 1 1 1 1