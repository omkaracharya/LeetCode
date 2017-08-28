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
        if (!head) return head;
        ListNode *prev, *curr;
        ListNode *fakeNode = new ListNode(0);
        fakeNode->next = head;
        prev = fakeNode;
        curr = head;
        while (curr) {
            while (curr->next && curr->next->val == curr->val)
                curr = curr->next;
            if (prev->next == curr)
                prev = curr;
            else
                prev->next = curr->next;
            curr = curr->next;
        }
        return fakeNode->next;
    }
};