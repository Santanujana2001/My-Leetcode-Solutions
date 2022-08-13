class Solution {
public:
//     Explored from discussion
    string dayOfTheWeek(int day, int month, int year) {
        int daysinmonth[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
        string nameofday[7]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
        int sum=4;
//         count days from year 1971 to pre-final year
        for(int i=1971;i<year;i++){
            if((i%4==0 && i%100!=0)|| i%400==0){
                sum+=366;
            }
            else{
                sum+=365;
            }
        }
//         count days from first month pre-final month
        for(int i=1;i<month;i++){
            if(i==2 && ((year%4==0 && year%100!=0)|| year%400==0) ){
                sum+=1;
            }
            sum+=daysinmonth[i];
        }
//         add left days
        sum+=day;
        return nameofday[sum%7];
    }
};