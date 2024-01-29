class Solution {
public:
    bool isAnagram(string s, string t) {
//         sort(s.begin(), s.end());
//         sort(t.begin(), t.end());
        
//         if(s==t) return true;
        
//         return false;  
        
        int m=s.size();
        int n=t.size();
        vector<int> h(26);
        if(m!=n) return false;
        
        for(int i=0;i<m;i++){
            
            h[s[i]-'a']++;
        }
        
         for(int j=0;j<n;j++){
            
           int x=  --h[t[j]-'a'];
           if(x<0) return false;
         }
        
        return true;
        
        }
    
};