class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int cs=0;
        int cnt=0;
        unordered_map<int,int> us;
        for(int i=0;i<n;i++){
            cs=nums[i]+cs;
            if(cs==k){
                cnt++;
            }
            if(us.find(cs-k)!=us.end()){
                cnt+=us[cs-k];
            }
            us[cs]++;
        }
        
        
        return cnt;
    }
};