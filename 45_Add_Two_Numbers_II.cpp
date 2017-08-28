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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack <int> s1, s2;
        ListNode *p1 = l1, *p2 = l2;
        while (p1) {
            s1.push(p1->val);
            p1 = p1->next;
        }
        while (p2) {
            s2.push(p2->val);
            p2 = p2->next;
        }
        ListNode *head = NULL;
        int carry = 0;
        while (!s1.empty() || !s2.empty()) {
            int num1 = 0;
            int num2 = 0;
            if (!s1.empty()) {
                num1 = s1.top();
                s1.pop();
            }
            if (!s2.empty()) {
                num2 = s2.top();
                s2.pop();
            }
            int sum = (num1 + num2 + carry) % 10;
            carry = (num1 + num2 + carry) / 10;
            ListNode *n = new ListNode(sum);
            if (!head) {
                head = n;
            } else {
                n->next = head;
                head = n;
            }
        }
        if (carry) {
            ListNode *n = new ListNode(carry);
            if (!head) {
                head = n;
            } else {
                n->next = head;
                head = n;
            }            
        }
        return head;
    }
};