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
    ListNode* reverse(ListNode *head) {
        ListNode *prev = NULL;
        ListNode *curr = head;
        ListNode *next;
        while (curr) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    
    bool compare(ListNode *a, ListNode *b) {
        if (!a && !b) return true;
        if (!a || !b) return false;
        while (a && b) {
            if (a->val != b->val) return false;
            a = a->next;
            b = b->next;
        }
        if (!a && !b) return true;
        else return false;
    }
    
    bool isPalindrome(ListNode* head) {
        // 1. Find the middle node
        if (!head || !head->next) return true;
        ListNode *slow = head, *fast = head;
        ListNode *prev_of_slow, *middle;
        while (slow && fast && fast->next) {
            fast = fast->next->next;
            prev_of_slow = slow;
            slow = slow->next;
        }
        
        // If the length is odd
        if (fast) {
            middle = slow;
            slow = slow->next;
        }
        
        ListNode *second_half = slow;
        prev_of_slow->next = NULL;
        ListNode* revHead = reverse(second_half);
        return compare(head, revHead);
    }
};