class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> v=prices;
        stack<int> s;
        for(int i=prices.size()-1;i>=0;i--){
           while(!s.empty() && prices[i]<s.top()){
               s.pop();
           }
           if(!s.empty()){
               v[i]-=s.top();
           } 
            s.push(prices[i]);
        }
        return v;
    }
};