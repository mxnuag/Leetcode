#include <vector>

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();

        // Initialize left and right arrays
        vector<int> left(n, 1);
        vector<int> right(n, 1);

        // Calculate left products
        for (int i = 1; i < n; ++i) {
            left[i] = left[i - 1] * nums[i - 1];
        }

        // Calculate right products
        for (int i = n - 2; i >= 0; --i) {
            right[i] = right[i + 1] * nums[i + 1];
        }

        // Calculate the final result
        vector<int> ans(n);
        for (int i = 0; i < n; ++i) {
            ans[i] = left[i] * right[i];
        }

        return ans;
    }
};
