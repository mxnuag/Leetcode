class Solution {
public:
    int maxDepth(string s) {
        int full=0;
        int curr=0;
        stack<char> st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                curr++;
               full =max(full,(int)curr );
            }
            else if(s[i]==')'){
                curr--;
            }
        }
        
        
        return full;
        
        
    }
};