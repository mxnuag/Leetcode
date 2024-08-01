class Solution {
public:
    int countSeniors(vector<string>& details) {
        int cnt = 0;

        
        for (string& x: details) {
            
            int age = stoi(x.substr(11, 2));

            if (age > 60) {
                cnt++;
            }
        }

        return cnt;
    }
};