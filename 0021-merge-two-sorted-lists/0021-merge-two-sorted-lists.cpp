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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL && list2==NULL) return NULL;
        if(list1==NULL) return list2;
        if(list2==NULL) return list1;
        ListNode *head,*newhead;
         if(list1->val <= list2->val){
            newhead=list1;
            list1=list1->next;
        }
        else{
            newhead=list2;
            list2=list2->next;
        }
        head=newhead;
        while(list1!=NULL && list2!=NULL){
             //cout<<list1->val<<" "<<list2->val<<endl;
            if(list1->val <= list2->val){
                head->next=list1;
                head=list1;
                list1=list1->next;
            }
            else{
                head->next=list2;
                head=list2;
                list2=list2->next;
            }
        }
        if(list1!=NULL){
            head->next=list1;
            // head=list1;
            // list1=list1->next;
        }
        if(list2!=NULL){
            head->next=list2;
     
        }
        return newhead;
    }
};