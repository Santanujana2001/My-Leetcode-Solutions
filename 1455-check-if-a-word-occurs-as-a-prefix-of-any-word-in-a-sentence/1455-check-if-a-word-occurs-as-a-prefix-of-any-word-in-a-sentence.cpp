class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int ind=sentence.find(searchWord);
        if(ind==0){
            return ind+1;
        }
         ind=sentence.find(" "+searchWord);
        if(ind==-1){
            return ind;
        }
        int c=1;
        for(int i=0;i<=ind;i++){
            if(sentence[i]==' '){
                c++;
            }
        }
        return c;
    }
};