# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def swapPairs(self, head: 'ListNode') -> 'ListNode':
        if (head == None) or (head.next == None):
            return head
        
        preHead = ListNode(0)
        preHead.next = head
        
        metaHead = preHead
        
        while (metaHead!=None) and (metaHead.next!=None) and (metaHead.next.next!=None):
            f1 = metaHead.next
            f2 = metaHead.next.next
            f3 = metaHead.next.next.next
            metaHead.next = f2
            metaHead.next.next = f1
            metaHead.next.next.next = f3
            metaHead = metaHead.next.next
        
        return preHead.next
    