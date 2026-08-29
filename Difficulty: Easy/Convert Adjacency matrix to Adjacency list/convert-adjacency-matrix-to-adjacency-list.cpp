class Solution {
  public:
    vector<vector<int>> matToAdj(vector<vector<int>>& mat) {
        int n=mat.size();
        vector<vector<int>>adj(n);
        for(int i=0;i<mat.size();i++)  {
            for(int j=0;j<mat.size();j++){
                if(mat[i][j]==1){
                   
                    adj[i].push_back(j);
                }
            }
        }
        return adj;
        }
};