class Solution {
public:
    string reorganizeString(string s) {
        int n = s.size();
        vector<int> res(26, 0);
        
        
        for (auto it : s) {
            res[it - 'a']++;
            
            
            if (res[it - 'a'] > (n + 1) / 2) {
                return "";
            }
        }
        
        
        priority_queue<pair<int, char>> pq;
        for (int i = 0; i < 26; i++) {  
            char ch = i + 'a';
            if (res[i] > 0) {
                pq.push({res[i], ch});
            }
        }

        string ans = "";
        
        
        while (pq.size() >= 2) {
            auto p1 = pq.top(); pq.pop();
            auto p2 = pq.top(); pq.pop();
            
            ans.push_back(p1.second); p1.first--;
            ans.push_back(p2.second); p2.first--;
            

            if (p1.first > 0) {
                pq.push(p1);
            }
            if (p2.first > 0) {
                pq.push(p2);
            }
        }

        
        if (!pq.empty()) {
            ans.push_back(pq.top().second);
        }
        
        return ans;
    }
};
