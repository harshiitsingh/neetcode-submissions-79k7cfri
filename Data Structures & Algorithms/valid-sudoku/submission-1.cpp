class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0; i<9; i++){  
            unordered_set<int> unique_set;
            for(int j=0; j<9; j++){
                if(board[i][j] == '.') continue;
                if (unique_set.count(board[i][j])) {
                    return false;
                }
                else unique_set.insert(board[i][j]);
            }
        }

        for(int i=0; i<9; i++){
            unordered_set<int> unique_set;
            for(int j=0; j<9; j++){
                if(board[j][i] == '.') continue;
                if (unique_set.count(board[j][i])) {
                    return false;
                }
                else unique_set.insert(board[j][i]);
            }
        }

        for(int i=0; i<9; i++){
            unordered_set<int> seen;
            for(int square = 0; square<3; square++){
                for(int j = 0; j<3; j++){
                    int row = (i/3) * 3 + square;
                    int col = (i%3) * 3 + j;
                    if(board[row][col] == '.') continue;
                    if(seen.count(board[row][col])) return false;
                    seen.insert(board[row][col]);
                }
            }
        }
        
        return true;
    }
};
