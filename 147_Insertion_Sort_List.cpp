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
    ListNode* insertionSortList(ListNode* head) {
        ListNode *fakeHead = new ListNode(0);
        fakeHead->next = head;
        ListNode *curr = head, *prev = fakeHead;
        while (curr) {
            if (curr->next && curr->next->val < curr->val) {
                while (prev->next && prev->next->val < curr->next->val)
                    prev = prev->next;
                ListNode *temp = prev->next;
                prev->next = curr->next;
                curr->next = curr->next->next;
                prev->next->next = temp;
                prev = fakeHead;
            } else {
                curr = curr->next;
            }
        }
        return fakeHead->next;
    }
};