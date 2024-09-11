class Solution {
public:
    int minBitFlips(int start, int goal) {
        int cnt=0;
        int diff=start^goal;
        while(diff){
            if(diff&1){
                cnt++;
            }
            diff=diff>>1;
        }
        return cnt;
    }
};