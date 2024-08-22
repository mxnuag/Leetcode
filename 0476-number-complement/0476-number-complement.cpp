#include <cmath>

class Solution {
public:
    int findComplement(int num) {
        int i = 0;
        int j = 0;
        while (i < num) {
            i += std::pow(2, j);  // Use std::pow to calculate 2^j
            j++;
        }
        return i - num;
    }
};
