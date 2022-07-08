class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==1){
         return true; // IF 1 THEN RETURN TRUE 
        }
        if(n==0){
            return false;  // IF 0 THEN RETURN FALSE
        }
        bool p  = true;
        while(n){     // ITERATE UPTO 1
            if(n%2){   // IF N=1 MEANS ITS A ODD , SO BREAK AND RETURN FALSE 
                p=false;
                break;
            }
            n/=2;      // OTHERWISE DIVIDE N BY 2
            if(n==1){  // AFTER DIVIDING CHECEK IF IT'S 1 OR NOT, IF IT IS 1 
            break;    // MEANS WE REACHED N=2 AND ITS ALSO TRUE ,THEN BREAK IT.
            }
        }
        return p;
    }
};