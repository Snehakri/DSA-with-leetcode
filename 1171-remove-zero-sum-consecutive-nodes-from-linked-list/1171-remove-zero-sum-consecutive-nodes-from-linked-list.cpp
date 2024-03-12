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
    ListNode* removeZeroSumSublists(ListNode* head) {
        map<int,ListNode*> mp;
        ListNode* dummyhead=new ListNode(0,head);
        ListNode* temp=dummyhead;
        int prefix_sum=0;
        while(temp!=NULL){
            prefix_sum+=temp->val;
            mp[prefix_sum]=temp;
            temp=temp->next;
        }
        prefix_sum=0;
        temp=dummyhead;
        while(temp!=NULL){
            prefix_sum+=temp->val;
            temp->next=mp[prefix_sum]->next;
            temp=temp->next;
        }

        return dummyhead->next;
    }
};