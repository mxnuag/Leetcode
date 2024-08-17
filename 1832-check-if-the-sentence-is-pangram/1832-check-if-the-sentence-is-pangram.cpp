class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<char> arr(26,0);
        int  cnt=0;
        for(auto x: sentence){
            char idx=x -'a';
            if(arr[idx]==0){
            arr[idx]++;
            cnt++;
            }
        }
        if(cnt==26){
            return true;
        }
        return false;
    }
};