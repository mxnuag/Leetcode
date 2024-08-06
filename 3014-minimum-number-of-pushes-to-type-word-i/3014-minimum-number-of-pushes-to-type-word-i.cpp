class Solution {
public:
    int minimumPushes(string word) {
        int ans=0;
        int n=word.size();
        int cnt=1;
        if(n<8) return n;
        while(n){
            if(n>=8){
                ans+=8*cnt;
                n=n-8;
            }
            else{
                ans+=n*cnt;
                n=0;
            }
            cnt++;
        }
        return ans;
    }
};