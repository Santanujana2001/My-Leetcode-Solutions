

int mySqrt(int x){
   long int min,max;
    long int i=0;
for(;i<=x;i++){
    min=i*i;
    max=(i+1)*(i+1);
if(min==x || x>min && x<max){
    break;
}   
else if(max==x){
    i++;
    break;
}     
// else if(x>min && x<max){
//      break;
 // }
}
    return i;
}