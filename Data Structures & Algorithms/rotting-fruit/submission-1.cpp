class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int, int>> q;
        int fresh = 0, time = 0;
        int rows = grid.size(), cols = grid[0].size();

        for(int r = 0; r < rows; r++){
            for(int c = 0; c < cols; c++){
                if(grid[r][c] == 1){
                    fresh++;
                }
                if(grid[r][c] == 2){
                    q.push({r, c});
                }
            }
        }

        vector<vector<int>> directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
        while(fresh > 0 && !q.empty()){
            int length = q.size();
            for(int i = 0; i < length; i++){
                auto curr = q.front();
                q.pop();
                int r = curr.first;
                int c = curr.second;

                for(const auto& dir : directions){
                    int row = r + dir[0];
                    int col = c + dir[1];
                    if(row >= 0 && col >= 0 && row < grid.size() && col < grid[0].size() && grid[row][col] == 1){
                        grid[row][col] = 2;
                        q.push({row, col});
                        fresh--;
                    }
                }
            }
            time++;
        }
        return fresh == 0 ? time : -1;
    }
};
