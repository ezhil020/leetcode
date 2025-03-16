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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0);

        ListNode* dummy2 =  head;

        int count =1,size =0;
        while(dummy2){
            size++;
            dummy2 = dummy2->next;    
        }
        dummy2 = dummy;
        while(head != NULL){
            if(n ==  size - count + 1){
               dummy ->next = head->next;
               break;
            }
            cout << head->val<<endl;
            count++;
            dummy->next =  head;
            head = head->next;
            dummy =  dummy->next;
        }
        return dummy2->next ;
    } 
};