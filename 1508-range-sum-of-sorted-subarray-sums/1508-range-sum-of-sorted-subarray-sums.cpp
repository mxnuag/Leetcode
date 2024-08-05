class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int> arr;
        
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=i;j<n;j++){
                sum+=nums[j];
                arr.push_back(sum);
                
            }
        }
        
        sort(arr.begin(),arr.end());
        int sums=0;
        for(int i=left-1;i<=right-1;i++){
            sums=(sums+arr[i])%(1000000007);
        }
        return sums;    
    }
};