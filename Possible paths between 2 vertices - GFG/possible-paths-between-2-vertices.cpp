// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to count paths between two vertices in a directed graph.
    void dfs(int s,vector<int> adj[],int e,vector<bool>vis,int& count){
        if(s==e){
            vis[s]=0;
            count++;
            return;
        }
        vector<int>v=adj[s];
        for(int i:v){
            if(!vis[i]){
                vis[i]=1;
                dfs(i,adj,e,vis,count);
            }
        }
        vis[s]=0;
    }
    int countPaths(int V, vector<int> adj[], int source, int destination) {
        int count=0;
        vector<bool>vis(V,0);
        for(int i=0;i<V;i++){
            if(i==source){
                vis[source]=1;
                dfs(source,adj,destination,vis,count);
            }
        }
        return count;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // adj[v].push_back(u);
        }
        int source, destination;
        cin >> source >> destination;
        Solution obj;
        cout << obj.countPaths(V, adj, source, destination) << endl;
    }
    return 0;
}  // } Driver Code Ends