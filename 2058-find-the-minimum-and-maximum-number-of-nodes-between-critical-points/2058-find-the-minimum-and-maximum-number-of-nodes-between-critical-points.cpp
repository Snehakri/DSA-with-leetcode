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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> v(2,-1);
        int mini=INT_MAX;
        int a=-1;
        int b=-1;
        int i=1;
        ListNode* p=head->next;
        ListNode* s=head;
        while(p->next){
            if((p->next->val > p->val && s->val > p->val) || (p->next->val < p->val && s->val < p->val)){
                if(a==-1){ a=i;}
                if(b==-1) {
                    b=i;
                }
                else{
                    int temp=i-b;
                    //cout<<temp;
                    mini=min(temp,mini);
                    b=i;
                }
                //cout<<a<<b<<"ab  ";
            }
            s=p;
            p=p->next;
            i++;
        }
        if(a==b){
            return v;
        }
        v[0]=mini;
        v[1]=b-a;
        return v;
        
    }
};