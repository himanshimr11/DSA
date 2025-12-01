class Solution {
public:
    bool dfs(int i, int j, int k, vector<vector<char>>& b, string& w) {
        if (k == w.size()) return true;
        if (i < 0 || j < 0 || i >= b.size() || j >= b[0].size() || b[i][j] != w[k]) return false;
        
        char c = b[i][j];
        b[i][j] = '#';
        
        bool ok = dfs(i+1, j, k+1, b, w) ||
                  dfs(i-1, j, k+1, b, w) ||
                  dfs(i, j+1, k+1, b, w) ||
                  dfs(i, j-1, k+1, b, w);
        
        b[i][j] = c;
        return ok;
    }

    bool exist(vector<vector<char>>& board, string word) {
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[0].size(); j++) {
                if (dfs(i, j, 0, board, word)) return true;
            }
        }
        return false;
    }
};
