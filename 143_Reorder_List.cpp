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
    void reorderList(ListNode* head) {
        // 1. Find the middle Node
        
        ListNode *slow, *fast, *middle;
        slow = fast = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        middle = slow;
        
        // 2. Reverse the second half
        
        ListNode *prev = NULL, *curr = middle, *next;
        while (curr) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        
        // 3. Reorder
        
        ListNode *p = head, *q = prev;
        while (p != middle && q!= middle) {
            next = p->next;
            p->next = q;
            q = next;
            p = p->next;
        }
    }
};