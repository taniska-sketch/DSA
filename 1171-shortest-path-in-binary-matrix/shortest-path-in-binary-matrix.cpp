class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        
        int n = grid.size();

        // Starting or destination cell blocked
        if(grid[0][0] == 1 || grid[n-1][n-1] == 1)
            return -1;

        // 8 directions
        int x[8] = {-1,-1,-1,0,0,1,1,1};
        int y[8] = {-1,0,1,-1,1,-1,0,1};

        // Distance matrix
        vector<vector<int>> dist(n, vector<int>(n, -1));

        queue<pair<int,int>> q;

        // Starting cell
        q.push({0,0});
        dist[0][0] = 1;

        while(!q.empty()) {

            pair<int,int> node = q.front();
            q.pop();

            int row = node.first;
            int col = node.second;

            // Destination reached
            if(row == n-1 && col == n-1)
                return dist[row][col];

            // Check 8 directions
            for(int k = 0; k < 8; k++) {

                int newRow = row + x[k];
                int newCol = col + y[k];

                // Valid + open + unvisited
                if(newRow >= 0 && newRow < n &&
                   newCol >= 0 && newCol < n &&
                   grid[newRow][newCol] == 0 &&
                   dist[newRow][newCol] == -1) {

                    dist[newRow][newCol] = dist[row][col] + 1;

                    q.push({newRow, newCol});
                }
            }
        }

        return -1;
    }
};