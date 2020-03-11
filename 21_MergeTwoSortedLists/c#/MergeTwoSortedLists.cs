/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     public int val;
 *     public ListNode next;
 *     public ListNode(int x) { val = x; }
 * }
 */
public class Solution {
    public ListNode MergeTwoLists(ListNode l1, ListNode l2) {
        
        if(l1 == null){
            return l2;
        }
        if(l2 == null){
            return l1;
        }
        ListNode ansHead = new ListNode();
        
        if(l1.val>l2.val){
            ansHead = l2;
            l2 = l2.next;
        }
        else{
            ansHead = l1;
            l1 = l1.next;
        }
        
        ListNode metaHead = ansHead;
        while((l1!=null)||(l2!=null)){
            if(l1==null){
                metaHead.next = l2;
                break;
            }
            if(l2==null){
                metaHead.next = l1;
                break;
            }
            if(l1.val>l2.val){
                metaHead.next = l2;
                metaHead = metaHead.next;
                Console.WriteLine(metaHead.val);
                l2 = l2.next;
            }
            else{
                metaHead.next = l1;
                metaHead = metaHead.next;
                Console.WriteLine(metaHead.val);
                l1 = l1.next;
            }
        }
        
        return ansHead;
    }
}