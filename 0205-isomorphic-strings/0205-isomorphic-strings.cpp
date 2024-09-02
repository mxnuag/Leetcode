class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n=s.size();
        int m=t.size();
        unordered_map<char,vector<int>> mp1;
        unordered_map<char,vector<int>> mp2;
        
        for(int i=0;i<n;i++){
            mp1[s[i]].push_back(i);
        }
        for(int j=0;j<m;j++){
            mp2[t[j]].push_back(j);
        }
        for(int i=0;i<n;i++){
            if(mp1[s[i]]!=mp2[t[i]]){
                return false;
            }
        }
        return true;
        
        
    }
};