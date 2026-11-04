class Solution {
public:
bool isValidSudoku(vector<vector<char>>& board){
    bool row[9][9] = {false};
    bool col[9][9] = {false};
    bool box[9][9] = {false};

    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            if(board[i][j] == '.') continue;
            int val = board[i][j] - '1';
            int box_idx = (i / 3) * 3 + (j / 3);
            if(row[i][val] || col[j][val] || box[box_idx][val]) return false;
            row[i][val] = true;
            col[j][val] = true;
            box[box_idx][val] = true;
        }
    }

    return true;
}
};
