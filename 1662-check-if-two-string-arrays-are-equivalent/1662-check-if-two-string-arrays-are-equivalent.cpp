class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int x=word1.size();
        int y=word2.size();
        int w1=0;
        int i=0;
        int w2=0;
        int j=0;
        
        while(w1<x&&w2<y){
            if(word1[w1][i]!=word2[w2][j]){
                return false;
            }
            else{
                i++;
                j++;
            }
            
            if(i==word1[w1].size()){
               i=0;
               w1++;
            }
            if(j==word2[w2].size()){
               j=0;
               w2++;
            }
            if(w1==word1.size() && w2==word2.size()){
                return true;
            }
        }
        return false;
    }
};