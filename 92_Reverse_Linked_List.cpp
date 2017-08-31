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
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        ListNode *fakeNode = new ListNode(0);
        fakeNode->next = head;
        ListNode *mPrev = fakeNode;
        n -= m;
        while (--m)
            mPrev = mPrev->next;
        ListNode *prev = NULL;
        ListNode *curr = mPrev->next;
        ListNode *next;
        while (n--) {
            ListNode *next = curr->next;
            curr->next = next->next;
            next->next = mPrev->next;
            mPrev->next = next;
        }
        return fakeNode->next;
    }
};