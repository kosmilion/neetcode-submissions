class Solution {
public:
bool isValidSudoku(vector<vector<char>>& board) {

    for(int i = 0; i < 9; i++){
        bool nums[9] = {false};
        for(int j = 0; j < 9; j++){
            if(board[i][j] == '.') continue;
            int val = board[i][j] - '1';
            if(nums[val] == true) return false;
            nums[val] = true;
        }
    }

    for(int i = 0; i < 9; i++){
        bool nums[9] = {false};
        for(int j = 0; j < 9; j++){
            if(board[j][i] == '.') continue;
            int val = board[j][i] - '1';
            if(nums[val] == true) return false;
            nums[val] = true;
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            bool nums[9] = {false};
            for(int k = 0; k < 3; k++){
                for(int l = 0; l < 3; l++){
                    if(board[3 * i + k][3 * j + l] == '.') continue;
                    int val = board[3 * i + k][3 * j + l] - '1';
                    if(nums[val] == true) return false;
                    nums[val] = true;
                }
            }
        }
    }

    return true;
}
};
