class Solution {
public:
    int maxConsecutive(int bottom, int top, vector<int>& special) {
        sort(special.begin(),special.end());
        int m = special.front()-bottom;
        for(int i=1;i<special.size();i++){
            m=max(m,special[i]-special[i-1]-1);
        }
        return max(m,top-special.back());
    }
};