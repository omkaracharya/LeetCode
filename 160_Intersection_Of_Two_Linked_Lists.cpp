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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int len1 = 0, len2 = 0;
        for (ListNode *ptr = headA; ptr; ptr = ptr->next) len1++;
        for (ListNode *ptr = headB; ptr; ptr = ptr->next) len2++;
        ListNode *a, *b;
        a = headA;
        b = headB;
        int diff = abs(len1 - len2);
        if (len1 > len2)
            while (diff--) a = a->next;
        else if (len1 < len2)
            while (diff--) b = b->next;
        while (a && b) {
            if (a == b) return a;
            a = a->next;
            b = b->next;
        }
        return NULL;
    }
};