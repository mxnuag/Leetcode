class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int xorResult = 0; // More descriptive variable name

        // Iterate through each element in the array
        for (int num : nums) {
            xorResult ^= num; // XOR each element with the result
        }

        return xorResult; // Return the final XOR result, which is the single element
    }
};
