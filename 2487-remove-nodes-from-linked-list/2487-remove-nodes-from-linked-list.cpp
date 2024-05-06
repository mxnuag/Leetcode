/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNodes(ListNode* head) {
      stack<ListNode*> st;
        ListNode* temp=head;
        while(temp!=NULL){
            st.push(temp);
            temp=temp->next;
        }
        temp=st.top();
        st.pop();
        int max=temp->val;
        ListNode* rslt=new ListNode(max);
        
        while(!st.empty()){
            temp=st.top();
            st.pop();
            if(temp->val<max){
                continue;
            }
            else{
               ListNode* newNode=new ListNode(temp->val);
               newNode->next=rslt;
                rslt=newNode;
                max=temp->val;
            }
            
        }
        return rslt;
    }
};