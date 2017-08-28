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
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head || !head->next) return head;
        ListNode *curr = head;
        ListNode *next;
        while (curr->next) {
            if (curr->val == curr->next->val) {
                next = curr->next->next;
                free(curr->next);
                curr->next = next;
            } else
                curr = curr->next;
        }
        return head;
    }
};