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
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next) return head;
        int len = 0;
        ListNode *last, *temp = head;
        while (temp) {
            last = temp;
            temp = temp->next;
            len++;
        }
        last->next = head;
        temp = head;
        for (int i = 0; i < len - (k % len) - 1; ++i)
            temp = temp->next;
        head = temp->next;
        temp->next = NULL;
        return head;
    }
};