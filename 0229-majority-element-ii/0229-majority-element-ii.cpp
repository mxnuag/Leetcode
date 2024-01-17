// class Solution {
// public:
//     vector<int> majorityElement(vector<int>& nums) {
//         int cnt1=0;
//         int cnt2=0;
//         int ele1;
//         int ele2;
//         int n=nums.size();
//         for(int i=0;i<n;i++){
//             if(cnt1==0 && nums[i]!=ele2){
//                 cnt1=1;
//                 ele1=nums[i];
//             }
//             else if(cnt2==0 && ele1!=nums[i]){
//                 cnt2=1;
//                 ele2=nums[i];
//             }
            
//             else if(nums[i]==ele1){cnt1++;}
//             else if(nums[i]==ele2){cnt2++;}
//             else{
//                 cnt1--;
//                 cnt2--;
//             }
//         }
        
//         vector <int> ans;
//         for(int i=0;i<n;i++){
//             if(nums[i]==ele1){cnt1++;}
//             else if(nums[i]==ele2){cnt2++;}
//         }
//         int var= (n/3);
//         if(cnt1>=var){ans.push_back(ele1);}
//         else if(cnt2>=var){ans.push_back(ele2);}
//         sort(ans.begin(), ans.end());
//         return ans;
//     }
// };

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cnt1 = 0;
        int cnt2 = 0;
        int ele1;
        int ele2;
        int n = nums.size();
        
        for(int i = 0; i < n; i++) {
            if(cnt1 == 0 && (cnt2 == 0 || ele2 != nums[i])) {
                cnt1 = 1;
                ele1 = nums[i];
            }
            else if(cnt2 == 0 && ele1 != nums[i]) {
                cnt2 = 1;
                ele2 = nums[i];
            }
            else if(nums[i] == ele1) {
                cnt1++;
            }
            else if(nums[i] == ele2) {
                cnt2++;
            }
            else {
                cnt1--;
                cnt2--;
            }
        }
        
        cnt1 = 0;
        cnt2 = 0;
        for(int i = 0; i < n; i++) {
            if(nums[i] == ele1) {
                cnt1++;
            }
            else if(nums[i] == ele2) {
                cnt2++;
            }
        }
        
        int var = (n / 3);
        vector<int> ans;
        if(cnt1 > var) {
            ans.push_back(ele1);
        }
        if(cnt2 > var) {
            ans.push_back(ele2);
        }
        
        sort(ans.begin(), ans.end());
        return ans;
    }
};
