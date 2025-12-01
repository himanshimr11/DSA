class Solution {
public:
    bool valid(vector<vector<char>>& b, int r, int c, char ch) {
        for (int i = 0; i < 9; i++) {
            if (b[r][i] == ch) return false;
            if (b[i][c] == ch) return false;
            if (b[3*(r/3) + i/3][3*(c/3) + i%3] == ch) return false;
        }
        return true;
    }

    bool solve(vector<vector<char>>& b) {
        for (int r = 0; r < 9; r++) {
            for (int c = 0; c < 9; c++) {
                if (b[r][c] == '.') {
                    for (char ch = '1'; ch <= '9'; ch++) {
                        if (valid(b, r, c, ch)) {
                            b[r][c] = ch;
                            if (solve(b)) return true;
                            b[r][c] = '.';
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }

    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};
