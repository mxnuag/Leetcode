class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        
        unordered_map<int,int> mp;
        int n=0;
        for(auto it: nums){
            mp[it]++;
            n=max(n,mp[it]);
        }
        
        vector<vector<int>> ans(n);
        vector<set<int>> st(n);
        
        for(auto x:nums){
            for(int i=0;i<n;i++){
                if(st[i].find(x)==st[i].end()){
                    st[i].insert(x);
                    ans[i].push_back(x);
                    break;
                }
            }
        }
        return ans;
        
    }
};