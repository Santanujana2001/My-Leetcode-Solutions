class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> v;
        int num=1;
        for(int i=0;i<target.size();i++){
            while(num!=target[i]){
                num++;
                v.push_back("Push");
                v.push_back("Pop");
            }
            num++;
            v.push_back("Push");
        }
        return v;
    }
};