class Solution {
public:
    
    bool isPalindrome(string& s){
            int st=0;
            int e=s.size()-1;
            while(st<=e){
                if(s[st]!=s[e]){
                    return false;
                }
                st++;
                e--;
            }
            
            return true;
        }
        
    string firstPalindrome(vector<string>& words) {
        for(auto it: words){
            if(isPalindrome(it)){
                return it;
            }
        }
        
        return "";
    }
};