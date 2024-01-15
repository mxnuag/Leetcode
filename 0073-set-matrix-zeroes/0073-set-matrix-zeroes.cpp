class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        
        vector<int> rows(m, 0), columns(n, 0);
        
        // Mark rows and columns to be set to zero
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(matrix[i][j] == 0) {
                    rows[i] = 1;
                    columns[j] = 1;
                }
            }
        }
        
        // Set rows to zero and columns also
        for(int i = 0; i < m; i++) {
            if(rows[i] == 1 || columns[j]==1) {
                for(int j = 0; j < n; j++) {
                    matrix[i][j] = 0;
                }
            }
        }
        
    }
};
