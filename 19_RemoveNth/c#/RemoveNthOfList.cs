/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     public int val;
 *     public ListNode next;
 *     public ListNode(int x) { val = x; }
 * }
 */
public class Solution {
    public ListNode RemoveNthFromEnd(ListNode head, int n) {
        ListNode del = head;
        int val = 0;
        bool m = false;
        for (ListNode go = head;go!=null;go=go.next){
            if (m){
                del = del.next;
            }
            if (val==n){
                m = true;
            }
            val++;
        }
        if(!m){
            head = head.next;
        }
        else{
            del.next = del.next.next;
        }
        return head;
    }
}