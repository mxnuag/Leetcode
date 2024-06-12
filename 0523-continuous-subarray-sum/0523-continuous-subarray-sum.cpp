#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int pre = 0;
        unordered_map<int, int> mp;
        mp[0] = -1;  // To handle the case where a valid subarray starts from index 0
        
        for (int i = 0; i < nums.size(); i++) {
            pre += nums[i];
            pre %= k;
            
            if (mp.find(pre) != mp.end()) {
                if (i - mp[pre] > 1) {
                    return true;
                }
            } else {
                mp[pre] = i;
            }
        }
        return false;
    }
};


