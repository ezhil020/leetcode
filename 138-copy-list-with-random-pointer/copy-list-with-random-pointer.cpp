/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node *deep = new Node(0);
        Node *copy = deep;
        Node *headcpy = head;
        unordered_map<Node*,Node*> nod;
        while(head){
            copy->next = new Node(0);
              copy = copy->next;
             copy->val = head->val;
              nod[head] = copy;
              head = head->next;
        }
     head = headcpy;
     copy = deep->next;
        while(head){
         copy->random = head->random ? nod[head->random] : nullptr;
           copy = copy->next;
           head = head->next;
        }
        return deep->next;

              
              
              
             
        

    }
};