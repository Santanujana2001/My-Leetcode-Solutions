class Solution
{
    public:
    void solve(string digits,string out,int ind,vector<string> &ans,string mapp[]){
        if(ind>=digits.length()){
            ans.push_back(out);
            return;
        }
        int num=digits[ind]-'0';
        string letters=mapp[num];
        for(int i=0;i<letters.length();i++){
            out.push_back(letters[i]);
            solve(digits,out,ind+1,ans,mapp);
            out.pop_back();
        }
    }
        vector<string> letterCombinations(string digits)
        {
            vector<string> ans;
            if (digits.length() == 0) {
                return ans;
            }
            string out;
            int ind = 0;
            string mapp[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
            solve(digits,out,ind,ans,mapp);
            return ans;
        }
};