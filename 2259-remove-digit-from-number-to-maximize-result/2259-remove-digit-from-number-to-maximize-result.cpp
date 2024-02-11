class Solution {
public:
    string removeDigit(string number, char digit) {
        string ans="";
        int n=number.size();
        string temp=number;
        for(int i=0;i<n;i++){
            if(temp[i]==digit){
                temp.erase(temp.begin()+i);
                ans=max(temp,ans);
                temp=number;
            }
        }
        
        return ans;
        
    }
};