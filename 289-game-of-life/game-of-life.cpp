class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int m = board.size();
        int n = board[0].size();

        // Directions for 8 neighbors
        int dx[8] = {0, 1, 0, -1, -1, -1, 1, 1};
        int dy[8] = {1, 0, -1, 0, -1, 1, -1, 1};

        // First pass: apply the rules with encoding
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                int liveNeighbors = 0;

                // Check all 8 neighbors
                for (int d = 0; d < 8; d++) {
                    int ni = i + dx[d];
                    int nj = j + dy[d];

                    if (ni >= 0 && ni < m && nj >= 0 && nj < n) {
                        if (abs(board[ni][nj]) == 1) {
                            liveNeighbors++;
                        }
                    }
                }

                // Apply rules with encoding
                if (board[i][j] == 1) {
                    if (liveNeighbors < 2 || liveNeighbors > 3) {
                        board[i][j] = -1; // live to dead
                    }
                } else if (board[i][j] == 0) {
                    if (liveNeighbors == 3) {
                        board[i][j] = 2; // dead to live
                    }
                }
            }
        }

        // Second pass: finalize the board state
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (board[i][j] == -1) {
                    board[i][j] = 0;
                } else if (board[i][j] == 2) {
                    board[i][j] = 1;
                }
            }
        }
    }
};
