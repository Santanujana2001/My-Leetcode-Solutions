class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int res=0,n=arr.size(),end,start,total,odd;
        for(int i=0;i<n;i++){
//             for all subarrays starts with ith digit
            start=i+1;
//             for all subarrays ends with ith digit
            end=n-i;
//             total is the multiplication of both
            total=end*start;
//             total odd subarrays == ( no. of all subarrays / 2 );  
            odd=total/2;
//             if it's odd then +1 otherwise not
            if(total%2==1){
                odd++;
            }
//             sum += total no. of odd subarrays * ith element;
            res+=odd*arr[i];
        }
        return res;
    }
};