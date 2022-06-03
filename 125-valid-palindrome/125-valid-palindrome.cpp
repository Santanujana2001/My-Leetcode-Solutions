// class Solution {
// public:
//     // Brute Force Approach
//     // Time - O(N)
//     // Space - O(N)    
//     bool isPalindrome(string s) {
//         string f="";
//         for(int i=0;i<s.length();i++){
//             if(isalnum(s[i])){
//                 f+=tolower(s[i]);
//             }
//         }
//         string l="";
//         for(int i=s.length()-1;i>=0;i--){
//             if(isalnum(s[i])){
//                 l+=tolower(s[i]);
//             }
//         }
//         return f==l;
//     }
// };

// Optimised 

   // Time - O(LogN)
   // Space - O(1)    

class Solution {
    public :
    bool isPalindrome(string s) {
    for (int i = 0, j = s.size() - 1; i < j; i++, j--) { 
        while (isalnum(s[i]) == false && i < j){
           i++; 
        }  
        while (isalnum(s[j]) == false && i < j){
           j--; 
        } 
        if (tolower(s[i]) != tolower(s[j])){
           return false;  
        } 
    }
    
    return true;
  }
};
