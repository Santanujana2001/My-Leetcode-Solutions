class Solution {
public:
    void solvedfs(int s, int e,vector<int>tmp,vector<vector<int>>&v,vector<vector<int>>& graph){
        tmp.push_back(s);
        if(s==e){
            v.push_back(tmp);
            return;
        }
        for(int i:graph[s]){
            solvedfs(i,e,tmp,v,graph);
        }
        tmp.pop_back();
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
         int end=graph.size()-1,start=0;
        vector<int>tmp;
        vector<vector<int>>v;
        solvedfs(start,end,tmp,v,graph);
        return v;
    }
};