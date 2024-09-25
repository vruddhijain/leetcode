class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        
        vector<int> dr = {0, +1, 0, -1};
        vector<int> dc = {+1, 0, -1, 0};
        
        int fresh = 0;  // Count of fresh oranges
        int ans = 0;    // Time counter
        queue<pair<int, int>> q;  // Queue for BFS
        
        // Initial scan of the grid
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 1) {
                    fresh++;  // Count fresh oranges
                }
                if (grid[i][j] == 2) {
                    q.push({i, j});  
                }
            }
        }
        
        // If there are no fresh oranges, no time is needed
        if (fresh == 0) return 0;

        // BFS traversal
        while (!q.empty()) {
            int size = q.size();
            bool rotOccurred = false; // Track if any fresh orange rots in this step
            for (int i = 0; i < size; i++) {
                auto [r, c] = q.front();  // Get the front element from the queue
                q.pop();
                
                // Explore the four adjacent directions
                for (int d = 0; d < 4; d++) {
                    int nr = r + dr[d];
                    int nc = c + dc[d];
                    
                    // Check if the new coordinates are within bounds and if the orange is fresh
                    if (nr >= 0 && nr < m && nc >= 0 && nc < n && grid[nr][nc] == 1) {
                        grid[nr][nc] = 2;  // Make the fresh orange rotten
                        q.push({nr, nc});  // Add the new rotten orange to the queue
                        fresh--;  // Decrease the count of fresh oranges
                        rotOccurred = true;  // Mark that rotting occurred
                    }
                }
            }
            
            // If at least one orange rotted, increase the time counter
            if (rotOccurred) {
                ans++;
            }
        }
        
        // If there are still fresh oranges left, return -1
        return fresh == 0 ? ans : -1;
    }
};
