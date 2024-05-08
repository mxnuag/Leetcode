class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n=score.size();
        vector<pair<int,int>> p;
        for(int i=0;i<n;i++){
            p.push_back({score[i],i});
        }
        
        sort(p.rbegin(),p.rend());
        
        vector<string> ans(n);
        for(int i=0;i<n;i++){
            if(i==0){
                ans[p[i].second]="Gold Medal";
            }
            else if(i==1){
                ans[p[i].second]="Silver Medal";
            }
           else if(i==2){
                ans[p[i].second]="Bronze Medal";
            }
            else{
                ans[p[i].second]=std::to_string(i+1);
            }
            
        }
        return ans;
    }
};