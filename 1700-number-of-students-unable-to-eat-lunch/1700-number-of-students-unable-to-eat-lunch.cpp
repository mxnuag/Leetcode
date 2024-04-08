class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int m=sandwiches.size();
        queue<int> q;
        stack<int> st;
        bool done=false;
        int cnt=0;
        int i;
        
        for(i=m-1;i>=0;i--){
            st.push(sandwiches[i]);
        }
        for(int i=0;i<m;i++){
            q.push(students[i]);
            
        }
        while(!done){
            
            if(q.empty()){
                return 0;
            }
           else if(cnt==q.size()){
                done=true;
            }
            
            else if(q.front()==st.top()){
                st.pop();
                q.pop();
                cnt=0;
            }
            
            else{
                q.push(q.front());
                q.pop();
                cnt++;
            }
        }
        return  q.size();
        
        
    }
};