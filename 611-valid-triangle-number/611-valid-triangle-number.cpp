class Solution
{
    public:
        int triangleNumber(vector<int> &nums)
        {
            sort(nums.begin(), nums.end());
            int n = nums.size();
            int c = 0;
            for (int i = 0; i + 2 < n; i++)
            {
                int k = i + 2;
                for (int j = i + 1; j < n; j++)
                {
                    while (k < n && nums[i] + nums[j] > nums[k])
                    {
                        k++;
                    }
                    if (k > j)
                    {
                        c += k - j - 1;
                    }
                }
            }
            return c;
        }
};