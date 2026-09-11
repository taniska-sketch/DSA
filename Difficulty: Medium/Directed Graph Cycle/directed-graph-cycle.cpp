class Solution {
  public:
   bool cycle =false;
        
    bool isCyclic(int V, vector<vector<int>> &edges) {
        
        vector<vector<int>> a(V);

        for(int i=0;i<edges.size();i++){
            int src=edges[i][0];
            int dest=edges[i][1];
            a[src].push_back(dest);
            
            
        }
        vector<bool>vis(V,false);
        vector<bool>path(V,false);
        for(int i=0;i<V;i++){
            if(vis[i]==false){
                dfs(a,V,i,path,vis);
            }
        }
        return cycle;
        
       
    }
    
    
void dfs( vector<vector<int>>& a,int V,int node,vector<bool>&path,vector<bool>& vis){
    vis[node]=true;
    path[node]=true;
    for(int j=0;j<a[node].size();j++){
        int neigh=a[node][j];
        if(vis[neigh]==true && path[neigh]==true){
            cycle=true;
        }
        if(vis[neigh]==false){
            dfs(a,V,neigh,path,vis);
        }
    }
    path[node]=0;
    return ;
}
};