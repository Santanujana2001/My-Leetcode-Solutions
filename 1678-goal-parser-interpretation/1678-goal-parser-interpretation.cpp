class Solution {
public:
    string interpret(string command) {
        string s="";
        for(int i=0;i<command.length();i++){
            if(command[i]!='(' && command[i]!=')' ){
                s=s+command[i];
            }
            else if(command[i]=='(' && command[i+1]==')'){
                s+='o';
                i++;
            }
            else{continue;}
        }
        return s;
    }
};