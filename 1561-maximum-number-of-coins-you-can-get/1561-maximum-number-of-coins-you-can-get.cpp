class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int s=0,e=piles.size()-1,sum=0;
        sort(piles.begin(),piles.end());
        while(s<e){
            sum+=piles[--e];
            e--;
            s++;
        }
        return sum;
    }
};