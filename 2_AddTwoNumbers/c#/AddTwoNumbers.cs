/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     public int val;
 *     public ListNode next;
 *     public ListNode(int x) { val = x; }
 * }
 */
public class Solution {
    public ListNode AddTwoNumbers(ListNode l1, ListNode l2) {
        ListNode res_head = new ListNode(0);
        ListNode meta = res_head;
        int carry = 0;
        while((l1 != null)||(l2 != null)||(carry != 0)){
            meta.next = new ListNode(0);
            meta = meta.next;
            int sum = (l1==null?0:l1.val)+(l2==null?0:l2.val)+carry;
            meta.val = sum%10;
            carry = sum/10;
            l1 = (l1==null?null:l1.next);
            l2 = (l2==null?null:l2.next);
        }
        res_head = res_head.next;
        return res_head;
    }
}