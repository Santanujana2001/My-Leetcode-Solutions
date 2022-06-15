class Solution {
public:
    bool judgeSquareSum(int c) {
        if(c<0){
            return false;
        }
        int long l=0,r=sqrt(c);
        while(l<=r){
            int long current=l*l+r*r;
            if(current>c){
                r--;
            }
            else if(current<c){
                l++;
            }
            else{
                 return true;  
            }
               
        }
        return false;
    }
};