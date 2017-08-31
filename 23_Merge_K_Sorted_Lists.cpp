/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Cmp {
public:
    bool operator()(ListNode *a, ListNode *b) {
        return a->val > b->val;
    }
};

class Solution {
public:
    
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode *head = NULL, *tail = NULL;
        priority_queue <ListNode*, vector<ListNode*>, Cmp> pq;
        for (auto ptr: lists) {
            if (ptr)
                pq.push(ptr);
        }
        while (!pq.empty()) {
            ListNode *t = pq.top();
            pq.pop();
            ListNode *n = new ListNode(t->val);
            t = t->next;
            if (t)
                pq.push(t);
            if (!head) {
                head = tail = n;
            } else {
                tail->next = n;
                tail = tail->next;
            }
        }
        return head;
    }
};