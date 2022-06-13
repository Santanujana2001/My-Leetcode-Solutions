class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
         int c=mat.size();
        vector<int> v;
        vector<int> t;
        vector<int> f;
        for (int i=0;i<mat.size();i++){
            c=0;
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]==0){
                    break;
                }
                c++;
            }
           v.push_back(c);
           t.push_back(c);
        }
        for (int i=0;i<mat.size();i++){
            cout<<i<<" "<<t[i]<<endl;
        }
        sort(v.begin(),v.end());
        int b=k,i=0;
        while(b--){
            for(int j=0;j<mat.size();j++){
                if(v[i]==t[j]){
                    i++;
                    f.push_back(j);
                    t[j]=INT_MAX;
                    break;
                }
            }
        }
        return f;
    }
};