class Solution {
public:
//     Got The Idea From Votrubac In Dtyped[i]iscussion
    bool isLongPressedName(string name, string typed) {
        string s="";
        int j=0;
        for(int i=0;i<typed.length();i++){
            if(j<name.length() && name[j]==typed[i]){
                s+=typed[i];
                j++;
            }
            else if(j>=1 && name[j-1]==typed[i] ){
                
            }
            else{
                return 0;
            }
        }
        cout<<s<<" "<<name;
        return s==name;
    }
};