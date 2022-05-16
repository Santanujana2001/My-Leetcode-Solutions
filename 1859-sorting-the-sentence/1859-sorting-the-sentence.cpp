class Solution {
public:
    string sortSentence(string s) {
        map<int,string>m;
        int c=1;
        string temp="";
        for(auto i:s){
            if(i>='1' && i<='9'){
                cout<<temp<<endl;
                m[i-'0']=temp;
                temp="";
            }
            else if(i==' '){
                c++;
            }
            else{
                temp+=i;
            }
        }
        s="";
        
        for(int i=1;i<=c;i++){
            if(i==c){
                s+=m[i];
            }
            else{
                s+=m[i];
                s+=" ";
            }
        }
        return s;
    }
};