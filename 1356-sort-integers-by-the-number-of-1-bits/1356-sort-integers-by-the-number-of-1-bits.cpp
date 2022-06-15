class Solution {
public:
    static bool c(int &i,int &j){
        int a = bitset<32>(i).count();
        int b = bitset<32>(j).count();
        if(a!=b){
            return a<b;
        }
        return i<j;
    }
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(),arr.end(),c);
        return arr;
    }
};