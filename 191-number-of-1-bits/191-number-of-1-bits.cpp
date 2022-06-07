class Solution {
public:
    int hammingWeight(uint32_t n) {
        int s=0;
        while(n){
         if((n&1)){
            s++;
        }
            n>>=1;
        } 
        return s;
    }
};