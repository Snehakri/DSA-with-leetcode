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
        Node* p=head;
        while(p){
            Node *cn=new Node(p->val);
            cn->next=p->next;
            p->next=cn;
            p=p->next->next;
        }
        p=head;
        while(p){
            Node *cn=p->next;
            if(p->random){
                cn->random=p->random->next;
            }
            else cn->random=NULL;
            p=p->next->next;
        }
        Node * dummy=new Node(-1);
        Node * res=dummy;
        p=head;
        while(p){
            res->next=p->next;
            res=res->next;
            p->next=p->next->next;
            p=p->next;
        }
        return dummy->next;
    }
};