class Solution
{
    public:
        int triangularSum(vector<int> &nums)
        {
            if(nums.size()==1){
                return nums[0];
            }
            while (1)
            {
                for (int i = 0; i + 1 < nums.size(); i++)
                {
                    int sum = nums[i] + nums[i + 1];
                    nums[i] = sum % 10;
                }
                nums.pop_back();
                if(nums.size()==1){
                    break;
                }
            }
            return nums[0];
        }
};