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
    
    ListNode* reverse(ListNode* head){
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* next=NULL;
        
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        
        return prev;
        
    }
    
    void reorderList(ListNode* head) {
        
        ListNode* sl=head;
        ListNode* fst=head;
        while(fst!=NULL && fst->next!=NULL){
            sl=sl->next;
            fst=fst->next->next;
        }
        
        ListNode* second=reverse(sl->next);
        sl->next=NULL;
        ListNode* first=head;
        
        while(second!=NULL){
            
            ListNode* temp1=first->next;
            ListNode* temp2=second->next;
            first->next=second;
            second->next=temp1;
            first=temp1;
            second=temp2;
        
        
        }
        
    }
};