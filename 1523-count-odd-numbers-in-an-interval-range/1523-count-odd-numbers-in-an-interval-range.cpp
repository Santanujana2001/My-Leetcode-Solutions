class Solution {
public:
    int countOdds(int low, int high) {
        int odds=(high-low)/2;
//         If Low And High Both Are Even Then Return The Ans 
        if(low%2==0 && high%2==0){
            return odds;
        }
//         Otherwise Increment The Ans And Return 
        return ++odds;
    }
};