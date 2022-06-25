class Solution
{
    public:
        vector<vector < int>> generate(int numRows)
        {
            vector<vector<int>> v;
            vector<int> t(1, 1);
            v.push_back(t);
            if (numRows == 1)
            {
                return v;
            }
            vector<int> m(2, 1);
            v.push_back(m);
            if (numRows == 2)
            {
                return v;
            }
            for (int i = 2; i < numRows; i++) {
                vector<int> tm(1,1);
                for(int j=1;j<i;j++){
                    tm.push_back(v[i-1][j-1]+v[i-1][j]);
                }
                tm.push_back(1);
                v.push_back(tm);
                tm.clear();
            }
            return v;
        }
};