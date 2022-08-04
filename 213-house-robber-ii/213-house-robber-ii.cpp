class Solution
{
    public:
        int solve(vector<int> v)
        {
            int prev1 = 0, prev2 = 0;
            for (int i = 0; i < v.size(); i++)
            {
                int take = v[i];
                if (i > 1)
                {
                    take += prev2;
                }
                int nottake = prev1;
                int cur = max(take, nottake);
                prev2 = prev1;
                prev1 = cur;
            }
            return prev1;
//             solve function is from striver's lecture
        }
    int rob(vector<int> &nums)
    {
        int n = nums.size();
        if (n == 1)
        {
            return nums[0];
        }
        vector<int> first, last;
        for (int i = 0; i < nums.size(); i++)
        {
            if (i != 0)
            {
                last.push_back(nums[i]);
            }
            if (i != n - 1)
            {
                first.push_back(nums[i]);
            }
        }
        return max(solve(last), solve(first));
//         rob function is from striver's house robber
    }
};