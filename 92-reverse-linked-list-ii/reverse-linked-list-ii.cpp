/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        int count = 1;
        stack<ListNode*> stk;
        ListNode* rev ;
        ListNode* dummy = new ListNode(0);
        rev = dummy;
        while (count < left && head->next) {
            dummy->next  = head;
            dummy =  dummy->next;
            head = head->next;
            count++;
        }
         
       while (count <= right) {
            stk.push(head);
           head = head->next;
            count++;
        }
        while (!stk.empty()) {
            dummy->next = stk.top();
             dummy = dummy->next;
            stk.pop();
        }
        dummy->next = head;
        return rev->next;
    }
};