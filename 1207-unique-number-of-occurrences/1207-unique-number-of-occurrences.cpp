class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        int n=arr.size();
        unordered_map<int,int> occur;
        for(int i=0;i<n;i++){
            occur[arr[i]]++;
        }
        
        unordered_set<int> st;
        for(auto &it: occur){
            int freq=it.second;
            if(st.find(freq)!=st.end()){
                return false;
            }
             st.insert(freq);
        }
        return true;
    
    }
};