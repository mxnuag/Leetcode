class Solution {
public:
    string makeGood(string s) {
        vector<char> vt;
        vt.push_back(s[0]);
        for(int i=1;i<s.size();i++){
            char top=vt.back();
            if(!vt.empty() && abs(top-s[i])==32){
                vt.pop_back();
            }
            else{
                vt.push_back(s[i]);
            }
        }
        string ans(vt.begin(), vt.end());
        return ans;
    }
};