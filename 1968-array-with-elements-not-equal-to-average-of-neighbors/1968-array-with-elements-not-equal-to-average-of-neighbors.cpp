class Solution {
public:
      vector<int> rearrangeArray(vector<int>& a) {
        sort(a.begin(), a.end());
        for (int i = 1; i < a.size(); i += 2)
            swap(a[i], a[i - 1]);
        return a;
//           lee's Solution
    }
};