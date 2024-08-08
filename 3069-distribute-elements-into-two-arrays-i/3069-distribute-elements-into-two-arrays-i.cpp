class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> arr1;
        vector<int> arr2;

        // Push the first two elements into arr1 and arr2 respectively
        arr1.push_back(nums[0]); // nums[0] is the first element
        arr2.push_back(nums[1]); // nums[1] is the second element

        // Iterate through the remaining elements starting from the third element
        for (int i = 2; i < nums.size(); i++) {
            // Append to arr1 or arr2 based on the comparison
            if (arr1.back() > arr2.back()) {
                arr1.push_back(nums[i]);
            } else {
                arr2.push_back(nums[i]);
            }
        }

        // Calculate the sizes of arr1 and arr2
        int n1 = arr1.size();
        int n2 = arr2.size();

        // Initialize the result array with size n1 + n2
        vector<int> res(n1 + n2);

        // Copy elements of arr1 and arr2 into the result array
        for (int i = 0; i < n1; i++) {
            res[i] = arr1[i];
        }
        for (int i = 0; i < n2; i++) {
            res[n1 + i] = arr2[i];
        }

        return res;
    }
};
