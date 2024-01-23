class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* l1 = list1;
        ListNode* l2 = list2;
        ListNode* newh = NULL;
        ListNode* curr = NULL;

        if (l1 == NULL && l2 == NULL) {
            return NULL;
        } else if (l1 == NULL) {
            return l2;
        } else if (l2 == NULL) {
            return l1;
        } else {
            while (l1 != NULL && l2 != NULL) {
                if (l1->val < l2->val) {
                    if (newh == NULL) {
                        newh = curr = l1;
                    } else {
                        curr->next = l1;
                        curr = l1;
                    }
                    l1 = l1->next;
                } else {
                    if (newh == NULL) {
                        newh = curr = l2;
                    } else {
                        curr->next = l2;
                        curr = l2;
                    }
                    l2 = l2->next;
                }
            }

            if (l1 != NULL) {
                curr->next = l1;
            } else if (l2 != NULL) {
                curr->next = l2;
            }
        }
        return newh;
    }
};
