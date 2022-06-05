class Solution {
public:
    double average(vector<int>& s) {
        double ans=0;
        int c=0;
        sort(s.begin(),s.end());
        for(int i=1;i<s.size()-1;i++){
            ans+=s[i];
            c++;
        }
        return ans/c; 
    }
};