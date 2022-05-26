class Solution
{
    public:
        vector<vector < string>> groupAnagrams(vector<string> &strs)
        {
            unordered_map<string, vector < string>> m;
            for (auto s: strs)
            {
                string sorted = s;
                sort(sorted.begin(), sorted.end());
                m[sorted].push_back(s);
            }

            vector<vector < string>> grouped;

            for (auto &kv: m)
            {
                grouped.push_back(kv.second);
            }

            return grouped;
        }
};