class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        unordered_map<int, int> count;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                count[grid[i][j]]++;
            }
        }

        int doubleVal = 0, missing = 0;

        for(int num = 1; num <= n * n; num++){
            int freq = count[num];
            if(freq == 0) missing = num;
            if(freq == 2) doubleVal = num;
        }
        return {doubleVal, missing};
    }
};