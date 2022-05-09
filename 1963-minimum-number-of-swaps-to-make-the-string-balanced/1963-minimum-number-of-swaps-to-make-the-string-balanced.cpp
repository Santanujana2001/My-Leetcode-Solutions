class Solution {
public:
    int minSwaps(string s) {
        stack<char> c;
        for(int i=0;i<s.length();i++){
            if(s[i]=='['){
             c.push(s[i]);
            }
            else if(!c.empty()){
                    c.pop();
                }
        }
        int a=c.size()+1;
        return a/2;
    }
};
// int minSwaps(string s) {
//         stack<char> st;
        
//         for(char &ch : s) {
//             if(ch == '[')        st.push(ch);
//             else if(!st.empty()) st.pop();
//         }       
//         return (st.size()+1)/2;
//     }