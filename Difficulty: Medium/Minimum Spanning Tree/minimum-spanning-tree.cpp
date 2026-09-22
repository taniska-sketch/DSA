class Solution {
  public:
    int spanningTree(int V, vector<vector<int>>& edges) {
      int sum=0;
     
     vector<vector<pair<int,int>>>adj(V);
      for (int i=0;i<edges.size();i++){
          int src=edges[i][0];
          int dest=edges[i][1];
          int wt=edges[i][2];
          adj[src].push_back({dest,wt});
          adj[dest].push_back({src,wt});
          
          
      }
      vector<int>vis(V,0);
      priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        
        pq.push({0,0});
      
        
        
        while(!pq.empty()){
            pair<int,int>p=pq.top();
            pq.pop();
             
            int wt=p.first;
            int node=p.second;
           
            if(vis[node]==1){
            continue;
            }
            vis[node] = 1;
                sum=sum+wt;
                
            
        
        for(int i=0;i<adj[node].size();i++){
            int neigh = adj[node][i].first;
            int edgeWeight = adj[node][i].second;
            pq.push({edgeWeight,neigh});
            
        }}
        return sum;
    }
};