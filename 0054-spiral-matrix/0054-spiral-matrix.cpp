#include <vector>

class Solution {
public:
    std::vector<int> spiralOrder(std::vector<std::vector<int>>& matrix) {
        int r = matrix.size();
        int c = matrix[0].size();
        int left = 0;
        int top = 0;
        int right = c - 1;
        int btm = r - 1;
        std::vector<int> ans;

        while (left <= right && top <= btm) {
            for (int i = left; i <= right; i++) {
                ans.push_back(matrix[top][i]);
            }
            top++;

            for (int i = top; i <= btm; i++) {
                ans.push_back(matrix[i][right]);
            }
            right--;

            if (top <= btm) {  // Check to avoid duplicate row traversal
                for (int i = right; i >= left; i--) {
                    ans.push_back(matrix[btm][i]);
                }
                btm--;
            }

            if (left <= right) {  // Check to avoid duplicate column traversal
                for (int i = btm; i >= top; i--) {
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }
        }

        return ans;
    }
};
