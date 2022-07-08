class Solution {
public:
    int climbStairs(int n) {
       
        if (n == 0 || n == 1 || n == 2){
             return n; 
        }
// given that we can either climb 1 or 2 steps , means n from 0 upto 2 the result will be n itself
        int a=1,b=2,c=0;
        for(int i=2;i<n;i++){
            c=a+b;
            a=b;
            b=c;
        }
//  if n = 3 the value will be like this --> 2+1=3
//  if n = 4 the value will be like this --> 3+2=5
//  if n = 5 the value will be like this --> 5+3=8
//    we can easily understand that it's a fibonacci series 
//  THE ABOVE SEGMENT IS THE SOLUTION FOR N>2 STAIRS 
    return c;
}
};