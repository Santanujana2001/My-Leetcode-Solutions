class Solution {
public:
    int arrangeCoins(int n) {
        long c=0;
        for(long i=1;i<=n;i++){
            c=(i*(i+1))/2;
            if(c==n){
                return i;
            }
            if(c>n){
                return i-1;
            }
        }
        return 0;
    }
};