class Solution {
public:
    bool row(int r, int c, char ch, vector<vector<char>> &v){
        int j = 0;
        while(j < 9){
         if(v[r][j] == ch && j != c) return true;
         j++;
        }
        return false;
    }

    bool col(int r, int c, char ch, vector<vector<char>> &v){
        int i = 0;
        while(i < 9){
          if(v[i][c] == ch && i != r) return true;
          i++;
        } 
        return false;
    }

    bool inside(int r, int c, char ch, vector<vector<char>> &v){
        int count = 0;
        for(int i = r; i<r+3; i++){
            for(int j = c; j<c+3; j++){
                if(v[i][j] == ch) count++;
                if(count > 1) return true;
            }
        }
        return false;
    }

    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i = 0; i<9; i++){
            for(int j = 0; j<9; j++){
                if(board[i][j] != '.'){
                if(row(i, j, board[i][j], board) || col(i, j, board[i][j], board) || 
                    inside((i/3)*3, (j/3)*3, board[i][j], board)) return false;
                }
            }
        }
        return true;
    }
};