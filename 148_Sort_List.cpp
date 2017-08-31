/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if (!head || !head->next)
            return head;
        
        // 1. Break the list into two halves
        ListNode *slow = head, *fast = head, *prev;
        while (fast && fast->next) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        prev->next = NULL;
        
        // 2. Recursively sort two halves
        ListNode *l1 = sortList(head);
        ListNode *l2 = sortList(slow);
        
        // 3. Recursively merge two halves
        return merge(l1, l2);
    }
    
    ListNode* merge(ListNode *l1, ListNode *l2) {
        ListNode *fakeHead = new ListNode(0);
        ListNode *prev = fakeHead;
        while (l1 && l2) {
            if (l1->val < l2->val) {
                prev->next = l1;
                l1 = l1->next;
            } else {
                prev->next = l2;
                l2 = l2->next;
            }
            prev = prev->next;
        }
        if (l1)
            prev->next = l1;
        if (l2)
            prev->next = l2;
        return fakeHead->next;
    }
};