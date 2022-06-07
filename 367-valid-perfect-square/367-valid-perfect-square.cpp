class Solution {
public:
    bool isPerfectSquare(int num) {
        int i=1,j=num;
        if(num==1){
            return true;
        }
        while(i<j){
          long int mid=i+(j-i)/2;
          if((mid*mid)==num){
              return true;  
          }
          else if((mid*mid)>num){
              j=mid;
          }
          
          else{
              i=mid+1;
          }
      }
        return false;         
    }
};