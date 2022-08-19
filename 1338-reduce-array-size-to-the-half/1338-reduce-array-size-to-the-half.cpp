class Solution
{
    public:
       	//     learnt from farz's yt video
        int minSetSize(vector<int> &arr)
        {
            vector<int> v;
            sort(arr.begin(), arr.end());
            int count = 1;
            for (int i = 1; i < arr.size(); i++)
            {
                if (arr[i] == arr[i - 1])
                {
                    count++;
                }
                else
                {
                    v.push_back(count);
                    count = 1;
                }
            }
            v.push_back(count);
            count = 0;
            sort(v.begin(), v.end());
            int n = arr.size() / 2;
            for (int i = v.size() - 1; i >= 0 && n > 0; i--)
            {
                count++;
                n -= v[i];
            }
            return count;
        }
};