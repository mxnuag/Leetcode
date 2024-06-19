#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <climits>

using namespace std;

class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        int n = words.size();
        vector<int> common(26, INT_MAX); // Initialize with INT_MAX

        // Loop through each word in the input list
        for (const string& word : words) {
            // Initialize a vector to store the frequency of characters in the current word
            vector<int> current(26, 0);
            
            // Count the frequency of each character in the current word
            for (char c : word) {
                current[c - 'a']++;
            }
            
            // Update the common frequency vector with the minimum frequency found in this word
            for (int i = 0; i < 26; i++) {
                common[i] = min(common[i], current[i]);
            }
        }

        // Prepare the result based on the minimum frequency of each character
        vector<string> res;
        for (int i = 0; i < 26; i++) {
            while (common[i] > 0) {
                res.push_back(string(1, 'a' + i));
                common[i]--;
            }
        }

        return res;
    }
};