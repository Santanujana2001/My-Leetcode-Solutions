class Solution {
public:
    int maxSatisfaction(vector<int>& s) {
        int n=s.size();
        sort(s.begin(),s.end(),greater<int>());
        int curr=0,cumm=0;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            curr+=cumm+s[i];
            cumm+=s[i];
            ans=max(ans,curr);
        }
        return ans;
    }
};