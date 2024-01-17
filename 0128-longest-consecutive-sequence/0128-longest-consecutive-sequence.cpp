class Solution {
public:
     int longestConsecutive(vector<int>& nums) {
//         int n=nums.size();
//         int longest=0;
//         if(n==0) return 0;
//         unordered_set<int> st;
//         for(int i=0;i<n;i++)
//         {
//             st.insert(nums[i]);
//         }

//         for(auto it:st)
//         {
//             if(st.find(it-1)==st.end()){
//                 int cnt=1;
//                 int x=it;
            
//             while(st.find(x+1)!=st.end()){
//                 x=x+1;
//                 cnt=cnt+1;
//             }

//             longest=max(longest,cnt);
//             }
//         }

//         return longest;
//     }
    
    int n=nums.size();
    int len=1;
    int maxlen=1;
    sort(nums.begin(), nums.end());
    if(n==0)return 0;
    for(int i=1; i<n;i++){
        if(nums[i]==nums[i-1]+1){
            len++;
        }
        else if(nums[i]==nums[i-1]){
            continue;
        }
        else{
            maxlen= max(maxlen,len);
            len=1;
        }
    }
    maxlen=max(maxlen,len);
    return maxlen;
     }
    
};