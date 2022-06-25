class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> v;
            vector<int> t(1, 1);
            v.push_back(t);
            if (rowIndex == 0)
            {
                return t;
            }
            vector<int> m(2, 1);
            v.push_back(m);
            if (rowIndex == 1)
            {
                return m;
            }
            for (int i = 2; i <= rowIndex; i++) {
                vector<int> tm(1,1);
                for(int j=1;j<i;j++){
                    tm.push_back(v[i-1][j-1]+v[i-1][j]);
                }
                tm.push_back(1);
                v.push_back(tm);
                tm.clear();
            }
        return v[rowIndex];
    }
};