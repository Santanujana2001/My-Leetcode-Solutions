class Solution {
public:
    string reformat(string s) {
//         found this solution on discussion 
        string a="",b="";
        for(auto i:s){
            if(isalpha(i)){
                a+=i;
            }
            else{
                b+=i;
            }
        }
        if(abs(int(a.size()-b.size()))>=2){
            return "";
        }
        int i,j,k;
        i=j=k=0;
        bool p = a.size()>b.size();
        while(i<s.length()){
            if(p){
                s[i++]=a[j++];
            }
            else{
                s[i++]=b[k++];
            }
            p=!p;
        }
        return s;
    }
};