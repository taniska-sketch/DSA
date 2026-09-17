class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        
        int n = rooms.size();
        
        vector<bool> vis(n, false);
        queue<int> q;
        
        // Start from room 0
        q.push(0);
        vis[0] = true;
        
        // BFS
        while(!q.empty()) {
            
            int node = q.front();
            q.pop();
            
            // Traverse all keys in current room
            for(int key : rooms[node]) {
                
                if(vis[key] == false) {
                    vis[key] = true;
                    q.push(key);
                }
            }
        }
        
        // Check if any room is unvisited
        for(int i = 0; i < n; i++) {
            
            if(vis[i] == false) {
                return false;
            }
        }
        
        return true;
    }
};