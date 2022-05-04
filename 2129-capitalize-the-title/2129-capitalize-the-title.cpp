class Solution {
public:
//     Got The Idea From Votrubac In Discussion
    string capitalizeTitle(string title) {
        int j=0;
        for(int i=0;i<=title.length();i++){
            if(title[i]==' ' || i==title.length()){
                   if(i-j>=3){
                      title[j]=toupper(title[j]);
                   }
                j=i+1;
            }
            else{
               title[i]=tolower(title[i]);
            }
        }
        return title;
    }
};