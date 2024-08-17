class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
        int i=0;
        int idx=0;
        while(i<n){
            int cnt=0;
            int cur=chars[i];
            while(i<n && cur==chars[i]){
                i++;
                cnt++;
            }
            chars[idx]=cur;
            idx++;
            if(cnt>1){
                string currchar=to_string(cnt);
                for(auto x: currchar){
                    chars[idx]=x;
                    idx++;
                }
            }
        }
        return idx;
    }
};