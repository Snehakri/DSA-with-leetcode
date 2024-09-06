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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        //bool arr[1e5+1]={0};
        map<int,int> m;
        for(int i=0;i<nums.size();i++){
           m[nums[i]]++;
        }
        ListNode *f=head;
         ListNode *s=NULL;
         while(f){
            if(m.find(f->val)==m.end()){
                if(s==NULL) {
                    s=f;
                    head=s;
                }else {
                    s->next=f;
                    s=f;
                }
                f=f->next;
            }
            else{
            f=f->next;}
         }
         s->next=NULL;
         return head;
    }
};