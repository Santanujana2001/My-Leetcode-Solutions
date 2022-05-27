class Solution {
public:
    int minMoves(int t, int m) {
        int r=0;
        while(t&&m){
            if(t%2){
                t--;
            }
            else{
                m--;
                t/=2;
            }
            r++;
        }
        return abs(r+t-1);
    }
};