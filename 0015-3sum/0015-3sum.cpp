#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<std::vector<int>> threeSum(std::vector<int>& nums) {
        std::vector<std::vector<int>> ans;
        int n = nums.size();
        std::sort(nums.begin(), nums.end());

        for (int i = 0; i < n; i++) {
            int a = nums[i];
            int tgt = -a;
            int l = i + 1;
            int r = n - 1;

            while (l < r) {
                if (nums[l] + nums[r] == tgt) {
                    ans.push_back({nums[i], nums[l], nums[r]});
                    l++;
                    r--;
                    while (l < r && nums[l] == nums[l - 1]) l++;  // Avoid duplicate triplets
                    while (l < r && nums[r] == nums[r + 1]) r--;  // Avoid duplicate triplets
                } else if (nums[l] + nums[r] < tgt) {
                    l++;
                } else {
                    r--;
                }
            }

            while (i + 1 < n && nums[i + 1] == nums[i]) {
                i++;
            }
        }

        return ans;
    }
};
