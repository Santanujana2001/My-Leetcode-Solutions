class Solution {
public:
    bool isPowerOfThree(int n) {
        bool p=true;
        if (n==1){
            return true;
        }
        else if (n==0){
            return false;
        }
        else{
            
            while(n){
                if(n<3){
                    p=false;
                    break;
                }
                else if(n==3){
                    p=true;
                    break;
                }
                else if(n%3==0){
                   n/=3; 
                }
                else{
                    return false;
                }
                
            }
        }
        return p;
    }
};