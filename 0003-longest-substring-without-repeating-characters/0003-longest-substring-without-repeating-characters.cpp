class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int ml=0;
        for(int i=0;i<n;i++){
             bool flag=false;
        unordered_set<char> us;
            for(int j=i;j<n;j++){
                if(us.find(s[j])!=us.end()){
                    ml=max(ml,j-i);
                    flag=true;
                    break;
                }
                us.insert(s[j]);
            }
            
            if(!flag){
                ml=max(ml, n-i);
            }
        }
        return ml;
    }
};