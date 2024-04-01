class Solution {
public:
    int lengthOfLastWord(string s) {
        int cnt = 0;
        int len = s.size();
        bool foundLastWord = false; // Flag to track if we have found the last word
        for (int i = len - 1; i >= 0; i--) {
            if (s[i] != ' ') {
                cnt++;
                foundLastWord = true; // Set the flag to true once we start counting the last word
            } else {
                if (foundLastWord) {
                    return cnt;
                }
            }
        }
        return cnt;
    }
};
