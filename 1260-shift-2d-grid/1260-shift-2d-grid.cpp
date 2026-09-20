class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        vector<vector<int>>dup;
        dup = grid;
        while(k--){
            for(int i=0;i<grid.size();i++){
                for(int j=0;j<grid[i].size();j++){
                    if(i==grid.size()-1 && j == grid[i].size()-1){
                        dup[0][0] = grid[i][j];
                    }
                    else if(j == grid[i].size()-1){
                        dup[i+1][0] = grid[i][j];
                    }
                    else dup[i][j+1] = grid[i][j];
                }
            }
            grid = dup;
        }
        return grid;
    }
};