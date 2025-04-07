/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode reverseList(ListNode head) {
        ListNode s=null;
        ListNode p=head;
        while(p!=null){
            ListNode temp=p.next;
            p.next=s;
            s=p;
            p=temp;
        }
        return s;
    }
}