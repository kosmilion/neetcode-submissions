class Solution {
public:
int numIslands(vector<vector<char>>& grid) {
    int n = grid.size();
    int m = grid[0].size();
    int islands = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(grid[i][j] == '1'){
                islands++;
                explore(grid, i, j);
            }
        }
    }

    return islands;
}

void explore(vector<vector<char>>& grid, int i, int j){
    if(i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size() || grid[i][j] == '0') return;

    grid[i][j] = '0';

    vector<pair<int, int>> dictionary = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    for(int p = 0; p < dictionary.size(); p++){
        explore(grid, i + dictionary[p].first, j + dictionary[p].second);
    }
}
};
