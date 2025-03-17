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
    ListNode* rotateRight(ListNode* head, int k) {
         ListNode* fast =  head;
         ListNode* slow = head;
         if(head == NULL || k == 0){
            return head;
         }
         int count =0;
         while(count != k && fast->next!=NULL){
            count++;
            fast = fast->next;
         }
         if(count < k){
            k  = k % (count+1);
            cout << "k="<<k;
            int n = count;
            count =0;
            if(k == 0 ){return head;}
            while(k !=  n-count ){
                slow = slow->next;
                count++;
            } 
               fast->next = head;
               cout << fast->val<<endl;
               head = slow->next;
               cout << slow->val;
               slow->next = NULL;
         }
         else{
             while(fast->next != NULL){
                slow = slow->next;
                fast = fast->next;
             }
               fast->next = head;
               head = slow->next;
               slow->next = NULL;
               
         }
         
        return head;
    }
};