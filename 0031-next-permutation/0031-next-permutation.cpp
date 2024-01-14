class Solution {
public:
    void nextPermutation(vector<int>& nums) {
//         int ind=-1;
//         int n=nums.size();
//         for(int i=n-2;i>=0;i--)
//         {
//             if(nums[i]<nums[i+1])
//             {
//                 ind=i;
//                 break;
//             }
//         }
//         if(ind==-1)
//         {
//             reverse(nums.begin(), nums.end());
//         }

//         for(int i=n-1;n>ind;i--)
//         {
//             if(nums[i]>nums[ind])
//             {
//                 swap(nums[i], nums[ind]);
//                 break;
//             }
//         }
//         reverse(nums.begin()+ind+1, nums.end());
    
        
//     }
        
        int peak=-1;
        int n=nums.size();
        for(int i=n-1;i>0;i--){
            if(nums[i-1]<nums[i]){
                peak=i;
                break;
            }
        }
        
        if(peak==-1){
            reverse(nums.begin(),nums.end());
        }
        else{
            for(int i=n-1;i>=peak;i--){
                if(nums[i]>nums[peak-1]){
                    swap(nums[i],nums[peak-1]);
                        break;
                }
            }
            reverse(nums.begin()+peak,nums.end());
            
        }
    }
    
};