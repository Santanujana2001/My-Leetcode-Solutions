class Solution {
public:
    int countOdds(int low, int high) {
        int odds=(high-low)/2;
        if(low%2==0 && high%2==0){
            return odds;
        }
        return ++odds;
    }
};