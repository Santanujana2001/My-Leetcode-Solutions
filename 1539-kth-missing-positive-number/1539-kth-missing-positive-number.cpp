class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        for (auto i : arr) {
            cout<<i<<" "<<k<<endl;
            if (i <= k) k++;
            else break;
        }
        return k;
    }
};