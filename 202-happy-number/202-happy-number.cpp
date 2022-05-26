class Solution {
public:
    bool isHappy(int n) {
        map<int,int>m;
        while(n){
            if(n==1){
                return 1;
            }
            int sum=0,dig=0;
            while(n){
                dig=n%10;
                sum+=(dig*dig);
                n/=10;
            }
            if(m[sum]==1){
                return 0;
            }
            m[sum]++;
            n=sum;
        }
        return 0;
    }
};