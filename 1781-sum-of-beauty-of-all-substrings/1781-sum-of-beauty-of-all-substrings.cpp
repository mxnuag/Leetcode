class Solution {
public:
    
    int beauty(vector<int> &a){
        int l=INT_MAX;
        int m=INT_MIN;
        for(int i=0;i<26;i++){
            m=max(m,a[i]);
            if(a[i]>=1){
                l=min(l,a[i]); 
            }
        }
        return m-l;
    }
    int beautySum(string s) {
        int ans=0;
        int n=s.size();
        
        for(int i=0;i<n;i++){
            vector<int> a(26,0);
            for(int j=i;j<n;j++){
              a[s[j]-'a']++;
              ans=ans+beauty(a);
            }
        }
        return ans;
    }
};