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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *prev = NULL, *curr = head;
        ListNode *fakeNode = new ListNode(0);
        fakeNode->next = head;
        prev = fakeNode;
        while (curr) {
            if (curr->val == val) {
                prev->next = curr->next;
                free(curr);
                curr = prev->next;
            } else {
                prev = curr;
                curr = curr->next;
            }
        }
        return fakeNode->next;
    }
};