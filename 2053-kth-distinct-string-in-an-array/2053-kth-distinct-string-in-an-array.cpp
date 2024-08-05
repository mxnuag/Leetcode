class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        int cnt=0;
        for(auto it:arr){
            if(mp[it]==1) cnt++;
            if(cnt==k) return it;
        }
        return "";
    }
};