class Solution {
  public:
    vector<int> dfs(vector<vector<int>>& adj) {
        int n=adj.size();
        vector<bool>vis(n,false);
        vector<int>res;
        abc(adj,0,res,vis);
        return res;
        
    }
    void abc(vector<vector<int>>& adj,int node,vector<int>&res,vector<bool>&vis){
        res.push_back(node);
        vis[node]=true;
        
        for(int i=0;i<adj[node].size();i++){
            int neigh=adj[node][i];
            if(vis[neigh]==false)
            abc(adj,neigh,res,vis);
        }
    }
    

};