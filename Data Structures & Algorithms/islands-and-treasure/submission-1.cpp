class Solution {
public:
    int rows, cols;
    int directions[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    int INF = INT_MAX;
        
    int bfs(vector<vector<int>>& grid, int r, int c){
        queue<pair<int, int>> q;
        q.push({r, c});
        vector<vector<bool>> visit(rows, vector<bool>(cols, false));
        visit[r][c] = true;
        int steps = 0;

        while(!q.empty()){
            int size = q.size();
            for(int i = 0; i < size; i++){
                auto [row, col] = q.front();
                q.pop();
                if(grid[row][col] == 0) return steps;

                for(auto& dir : directions){
                    int nr = row + dir[0], nc = col + dir[1];
                    if(nr >= 0 && nc >= 0 && nc < cols && nr < rows && !visit[nr][nc] && grid[nr][nc] != -1){
                        visit[nr][nc] = true;
                        q.push({nr, nc});
                    }
                }
            }
            steps++;
        }
        return INF;
    }
    void islandsAndTreasure(vector<vector<int>>& grid){
        rows = grid.size();
        cols = grid[0].size();

        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                if(grid[i][j] == INF){
                    grid[i][j] = bfs(grid, r, c);
                }
            }
        }
    }
};

