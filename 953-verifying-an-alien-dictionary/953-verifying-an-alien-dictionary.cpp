class Solution {
public:
//     learnt from discussion
    bool isAlienSorted(vector<string>& words, string order) {
        int a[26];
        for(int i=0;i<26;i++){
            a[order[i]-'a']=i;
        }
        for(auto &i:words){
            for(auto &j:i){
                j=a[j-'a'];
            }
        }
        // for(auto i:words){
        //     for(auto j:i){
        //         cout<<j<<" ";
        //     }
        //     cout<<endl;
        // }
        return is_sorted(words.begin(),words.end());
    }
};