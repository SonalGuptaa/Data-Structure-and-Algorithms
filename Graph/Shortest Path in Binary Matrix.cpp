class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        
     int n = grid.size();
        if (grid[0][0] == 1 || grid[n - 1][n - 1] == 1) return -1; 
        // Check if source or destination is blocked

        queue<pair<int, int>> q;
        vector<vector<int>> dist(n, vector<int>(n, 1e9));
        
        dist[0][0] = 1;
        q.push({0, 0});
        
        int dr[] = {-1, -1, 0, 1, 1, 1, 0, -1};
        int dc[] = {0, 1, 1, 1, 0, -1, -1, -1};
        
        while (!q.empty()) {
            auto cur = q.front();
            q.pop();
            int r = cur.first;
            int c = cur.second;
            
            for (int i = 0; i < 8; i++) {
                int newr = r + dr[i];
                int newcol = c + dc[i];
                
                if (newr >= 0 && newr < n && newcol >= 0 && newcol < n
                    && grid[newr][newcol] == 0 && dist[newr][newcol] > dist[r][c] + 1) {
                        dist[newr][newcol] = dist[r][c] + 1;
                        q.push({newr, newcol});
                    }
            }
        }
        
        // return (dist[n - 1][n - 1] == 1e9) ? -1 : dist[n - 1][n - 1];
        if(dist[n-1][n-1]== 1e9)
        {
            return -1;
        }
        else
        {
            return dist[n-1][n-1];
        }
        
    }
};