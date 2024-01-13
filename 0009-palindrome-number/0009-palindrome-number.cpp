#include <string>

class Solution {
public:
    bool isPalindrome(int x) {
        // Convert the integer to a string
        std::string str = std::to_string(x);

        // Initialize two pointers for checking palindrome
        int i = 0;
        int j = str.length() - 1;

        // Check if the string is a palindrome
        while (i < j) {
            if (str[i] != str[j]) {
                // If characters at the current positions are not equal, it's not a palindrome
                return false;
            }
            // Move the pointers towards the center
            ++i;
            --j;
        }

        // If the loop completes, the string is a palindrome
        return true;
    }
};
