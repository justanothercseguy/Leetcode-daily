// LeetCode 1895 - Larget Magic Square
// https://leetcode.com/problems/largest-magic-square/submissions/1888958089
// Difficulty: Medium
class Solution {
public:
    int largestMagicSquare(vector<vector<int>>& grid) {

        int m = grid.size();          // number of rows
        int n = grid[0].size();       // number of columns

        int maxSize = 1;              // minimum answer is 1 (1x1 is always magic)

        // keep i and j inside the grid
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {

                // increase square size step by step
                for (int k = 2; i + k <= m && j + k <= n; k++) {

                    int sumrow = 0;
                    bool magic = true;

                    // sum of first row (reference sum) to check if this sum equals to any sum for magic validity.
                    for (int col = 0; col < k; col++) {
                        sumrow += grid[i][j + col];
                    }

                    // check all rows of that magic square
                    for (int r = 0; r < k; r++) {
                        int rowsum = 0;
                        for (int c = 0; c < k; c++) {
                            rowsum += grid[i + r][j + c];
                        }
                        if (rowsum != sumrow) {
                            magic = false;
                            break;
                        }
                    }

                    // check all columns of that magic square
                    for (int c = 0; c < k && magic; c++) {
                        int sumcolumn = 0;
                        for (int r = 0; r < k; r++) {
                            sumcolumn += grid[i + r][j + c];
                        }
                        if (sumcolumn != sumrow) {
                            magic = false;
                            break;
                        }
                    }

                    // check both diagonals of that magic square
                    int diag1 = 0, diag2 = 0;
                    for (int d = 0; d < k; d++) {
                        diag1 += grid[i + d][j + d];
                        diag2 += grid[i + d][j + k - d - 1];
                    }

                    if (diag1 != sumrow || diag2 != sumrow) {
                        magic = false;
                    }

                    // if everything matched, update answer
                    if (magic) {
                        maxSize = max(maxSize, k);
                    }
                }
            }
        }

        return maxSize;
    }
};
