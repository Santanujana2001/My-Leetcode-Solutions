class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int m=word1.length(),n=word2.length(),i=0,j=0,k=0;
        string s="";
        while(i<m && j<n){
            s.push_back(word1[i++]);
            s.push_back(word2[j++]);
        }
        while(i<m){
            s.push_back(word1[i++]);
        }
        while(j<n){
            s.push_back(word2[j++]);
        }
        return s;
    }
};