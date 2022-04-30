class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int maxi=-1;
        int n=colors.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
            if(colors[j]!=colors[i])
            {
                maxi=max(j-i,maxi);
            }
            }
        }
        return maxi;

    }
};