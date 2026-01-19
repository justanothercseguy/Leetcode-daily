class Solution {
public:
    int maxSideLength(vector<vector<int>>& mat, int threshold) {

        int m = mat.size();
        int n = mat[0].size();

        // this is to define gridsum within borders
        vector<vector<int>> gridsum(m + 1, vector<int>(n + 1, 0));

        // building prefixsum
        // gridsum[i][j] = sum of everything from (0,0) to (i-1,j-1)
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                gridsum[i][j] =
                    gridsum[i - 1][j] +
                    gridsum[i][j - 1] -
                    gridsum[i - 1][j - 1] +
                    mat[i - 1][j - 1];
            }
        }

        // binary search on SIDE LENGTH
        int left = 0;
        int right = min(m, n);
        int maxSide = 0;

        while (left <= right) {
            int mid = (left + right) / 2; // trying square of size mid
            bool possible = false;

            // check all mid x mid squares
            for (int i = 0; i + mid <= m && !possible; i++) {
                for (int j = 0; j + mid <= n; j++) {

                    // sum of square using prefix sum
                    int squareSum =
                        gridsum[i + mid][j + mid]
                        - gridsum[i][j + mid]
                        - gridsum[i + mid][j]
                        + gridsum[i][j];

                    if (squareSum <= threshold) {
                        possible = true;
                        break;
                    }
                }
            }

            // if this size works, try bigger
            if (possible) {
                maxSide = mid;
                left = mid + 1;
            }
            // otherwise try smaller
            else {
                right = mid - 1;
            }
        }

        return maxSide;
    }
};
