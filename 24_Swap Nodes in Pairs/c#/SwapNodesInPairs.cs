/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     public int val;
 *     public ListNode next;
 *     public ListNode(int x) { val = x; }
 * }
 */
public class Solution {
    public ListNode SwapPairs(ListNode head) {
        if((head == null)||(head.next == null)){
            return head;
        }
        
        ListNode ansHead = new ListNode(0);
        ansHead.next = head;
        var metaHead = ansHead;
        var f1 = head;
        var f2 = head;
        var f3 = head;
        while((metaHead!=null)&&(metaHead.next!=null)&&(metaHead.next.next!=null)){
            // PrintList(metaHead);
            f1 = metaHead.next;
            f2 = f1.next;
            f3 = f2.next;
            metaHead.next = f2;
            metaHead.next.next = f1;
            metaHead.next.next.next = f3;
            metaHead = metaHead.next.next;
        }
        return ansHead.next;
    }
    
    private void PrintList(ListNode head){
        Console.WriteLine("start:");
        for(var meta = head; meta!=null;meta = meta.next){
            Console.WriteLine(meta.val);
        }
    }
}