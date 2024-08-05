class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int ws=0;
        for(auto it: nums){
            if(it==1){
                ws++;
            }
        }
        if(ws==0) return 0;
        int i=0;
        int j=0;
        int zerocount = 0;
        int ans = INT_MAX;
        int n = nums.size();
        while(i<nums.size()){
            if(nums[j%n]==0) zerocount++;
            if(j-i+1==ws){
                ans=min(ans,zerocount);
                if(nums[i]==0) zerocount--;
                i++;
            }
            j++;
        }
        return ans;
    }
};