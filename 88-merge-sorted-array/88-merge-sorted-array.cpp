class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        int a[m + n], k,i,j;
        k=i=j=0;
        // Initializing A New Array To Store All The Elements In Sorted Order 
        while (i < m && j < n)
        {
        // Copying The Elements In The New Array    
            if (nums1[i] < nums2[j])
            {
                a[k++] = nums1[i++];
            }
            else
            {
                a[k++] = nums2[j++];
            }
        }
        
        while (i < m)
        {
        // If First Array Contain Elements Then Copy Into New Array
            a[k++] = nums1[i++];
        }
        while (j < n)
        {
        // If Second Array Contain Elements Then Copy Into New Array
            a[k++] = nums2[j++];
        }
        // Copy All The Final Elements Into Nums1 
        for (i = 0; i < m + n; i++)
        {
            nums1[i] = a[i];
        }
    }
};