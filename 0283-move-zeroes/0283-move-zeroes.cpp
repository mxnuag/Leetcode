class Solution {
public:
    void moveZeroes(vector<int>& nums) {
         int nonZeroIndex = 0;
    
    // Iterate through the array
    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i] != 0) {
            std::swap(nums[i], nums[nonZeroIndex]);
            nonZeroIndex++;
        }
    }
}

int main() {
    std::vector<int> nums = {0, 1, 0, 3, 12}; // Replace with your own array
    
    moveZeroes(nums);
    
    for (int num : nums) {
        std::cout << num << " ";
    }
    
    return 0;
}
};