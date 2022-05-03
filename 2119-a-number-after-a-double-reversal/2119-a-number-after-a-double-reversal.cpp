class Solution {
public:
    bool isSameAfterReversals(int num) {
        int t=num,r,s=0;
        while(t){
            
            r=t%10;
            s=s*10+r;
            t/=10;
        }
        t=s,s=0;
        while(t){
            r=t%10;
            s=s*10+r;
            t/=10;
        }
        return s==num;
    }
};