class Solution {
public:

    int x[4] = {-1, 1, 0, 0};
    int y[4] = {0, 0, -1, 1};

    bool valid(int i, int j, int n, int m) {
        if(i < 0 || i >= n || j < 0 || j >= m)
            return false;

        return true;
    }

    int orangesRotting(vector<vector<int>>& grid) {

        int n = grid.size();
        int m = grid[0].size();

        queue<pair<int,int>> q;

        int fresh = 0;
        int time = 0;

        // Initial rotten + count fresh
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {

                if(grid[i][j] == 2) {
                    q.push({i,j});
                }

                if(grid[i][j] == 1) {
                    fresh++;
                }
            }
        }

        // BFS
        while(!q.empty() && fresh > 0) {

            time++;

            int s = q.size();

            while(s--) {

                pair<int,int> p = q.front();
                q.pop();

                int row = p.first;
                int col = p.second;

                for(int k = 0; k < 4; k++) {

                    int nr = row + x[k];
                    int nc = col + y[k];

                    if(valid(nr,nc,n,m) && grid[nr][nc] == 1) {

                        q.push({nr,nc});

                        grid[nr][nc] = 2;

                        fresh--;
                    }
                }
            }
        }

        if(fresh > 0)
            return -1;

        return time;
    }
};