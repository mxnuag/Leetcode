class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int cnt=0;
        int i=0;
        int j=people.size();
        while(i<j){
            if(people[i]+people[j-1]<=limit){
                i++;
                j--;
            }
            else{
                j--;
            }
            cnt++;
        }
        return cnt;
        
    }
};