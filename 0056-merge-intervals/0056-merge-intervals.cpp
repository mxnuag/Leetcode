class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> ans;
            int starting= intervals[0][0];
        int end=intervals[0][1];
        for(int i=1;i<intervals.size();i++){
            if(intervals[i][0]<=end){
                end=max(end,intervals[i][1]);
            }
            
            else{
                ans.push_back({starting,end});
                starting=intervals[i][0];
                end=intervals[i][1];
            }
        }
        
        ans.push_back({starting,end});
        return ans;
             
    }
};