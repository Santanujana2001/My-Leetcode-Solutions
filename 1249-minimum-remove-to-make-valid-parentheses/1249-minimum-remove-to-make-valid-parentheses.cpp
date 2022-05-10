class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> v;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                v.push(i);
            }
            else if(s[i]==')'){
                
            if(!v.empty()){
                v.pop();
            }
            else{
                s[i]='&';
            }
          }
        }
        while(!v.empty()){
            s[v.top()]='&';
            v.pop();
        }
        s.erase(remove(s.begin(),s.end(),'&'),s.end());
        return s;
    }
};