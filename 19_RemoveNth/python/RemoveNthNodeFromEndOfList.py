# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def removeNthFromEnd(self, head: ListNode, n: int) -> ListNode:
        if head == None or head.next == None:
            return None
        metaHead = head
        nodeSize = 0
        while metaHead != None:
            nodeSize+=1
            metaHead = metaHead.next
            
            
        metaHead = head    
        target = nodeSize-n-1

        if target<0:
            return head.next
        for i in range(target):
            metaHead = metaHead.next
        
        metaHead.next = metaHead.next.next
        
        
        
        return head