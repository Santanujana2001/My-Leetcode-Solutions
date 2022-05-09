class Solution {
public:
    int minAddToMakeValid(string s) {
        int l=0,r=0;
        for(auto a: s){
            if(a=='('){
                 r++;
            }
            else if(r>0){
                r--;
            }
            else{
                l++;
            }
        }
        return l+r;
    }
//     after 1hr of wasting time i moved on to the discussion to find a solution 
};