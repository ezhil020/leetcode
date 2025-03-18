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
    ListNode* partition(ListNode* head, int x) {
        ListNode* before = new ListNode(0);
        ListNode* sorted = before;
        ListNode* after = new ListNode(0);
        ListNode* after2 = after;
        while(head){
            if(head->val < x){
                before->next =  head;
                before = before->next;
                
            }
            else{
                after->next = head;
                after = after->next;
            }
            head = head->next;
        }
        before->next = after2->next;
        after->next = NULL;


        return sorted->next;
    }
};