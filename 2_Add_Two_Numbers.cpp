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
        ListNode *head = NULL, *tail = NULL;
        int carry = 0, sum = 0;
        while (l1 && l2) {
            sum = (l1->val + l2->val + carry);
            ListNode *temp = new ListNode(sum % 10);
            carry = sum / 10;
            if (!tail) {
                head = temp;
                tail = temp;
            } else {
                tail->next = temp;
                tail = temp;
            }
            l1 = l1->next;
            l2 = l2->next;
        }
        while (l1) {
            sum = (l1->val + carry);
            ListNode *temp = new ListNode(sum % 10);
            carry = sum / 10;
            if (!tail) {
                head = temp;
                tail = temp;
            } else {
                tail->next = temp;
                tail = temp;
            }

            l1 = l1->next;
        }
        while (l2) {
            sum = (l2->val + carry);
            ListNode *temp = new ListNode(sum % 10);
            carry = sum / 10;
            if (!tail) {
                head = temp;
                tail = temp;
            } else {
                tail->next = temp;
                tail = temp;
            }

            l2 = l2->next;
        }
        if (carry) {
            ListNode *temp = new ListNode(1);
            if (!tail) {
                head = temp;
                tail = temp;
            } else {
                tail->next = temp;
                tail = temp;
            }

        }
        return head;
    }
};