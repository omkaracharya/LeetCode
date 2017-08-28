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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *prev, *nexxt;
        ListNode *dummy = new ListNode(INT_MAX);
        dummy->next = head;
        prev = nexxt = dummy;
        n++;
        while (nexxt && n) {
            nexxt = nexxt->next;
            n--;
        }
        while (nexxt) {
            nexxt = nexxt->next;
            prev = prev->next;
        }
        if (n)
            *prev = *(prev->next);
        else
            prev->next = prev->next->next;
        return dummy->next;
    }
};