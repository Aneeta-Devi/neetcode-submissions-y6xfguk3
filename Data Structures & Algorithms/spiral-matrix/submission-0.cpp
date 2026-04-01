class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;

        int srows = 0, scol = 0;
        int erows = matrix.size() - 1;
        int ecol = matrix[0].size() - 1;

        while (srows <= erows && scol <= ecol) {

            // Top row
            for (int i = scol; i <= ecol; i++) {
                ans.push_back(matrix[srows][i]);
            }

            // Right column
            for (int i = srows + 1; i <= erows; i++) {
                ans.push_back(matrix[i][ecol]);
            }

            // Bottom row
            if (srows < erows) {
                for (int i = ecol - 1; i >= scol; i--) {
                    ans.push_back(matrix[erows][i]);
                }
            }

            // Left column
            if (scol < ecol) {
                for (int i = erows - 1; i > srows; i--) {
                    ans.push_back(matrix[i][scol]);
                }
            }

            srows++;
            erows--;
            scol++;
            ecol--;
        }

        return ans;
    }
};