class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
       int n=piles.size();
        int sum=0;
        priority_queue<int> pq;
        for(int i=0;i<n;i++){
            pq.push(piles[i]);
            sum+=piles[i];
        }
        for(int i=1;i<=k;i++){
            int tp=pq.top();
            pq.pop();
            int rem=(tp/2);
            sum-=rem;
            tp-=rem;
            pq.push(tp);
        }
        return sum;
    }
};