class Solution {
public:
     bool isVowel(char&ch){
            return ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u';
        }
    
    int maxVowels(string s, int k) {
        int n=s.size();
        int i=0;
        int j=0;
        int cnt=0;
        int maxi=0;
        while(j<n){
            if(isVowel(s[j])){
                cnt++;
            }
            if(j-i+1==k){
                maxi=max(maxi,cnt);
                if(isVowel(s[i]))
                    cnt--;
                i++;
            }
            j++;
        }
        return maxi;
        
    }
};