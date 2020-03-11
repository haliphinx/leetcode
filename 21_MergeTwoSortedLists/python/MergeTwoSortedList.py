# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def mergeTwoLists(self, l1: ListNode, l2: ListNode) -> ListNode:
        if l1 == None:
            return l2
        if l2 == None:
            return l1
        if l1.val>l2.val:
            ansHead = l2
            l2 = l2.next
        else:
            ansHead = l1
            l1 = l1.next
            
        metaHead = ansHead
        while (l1 != None) or (l2 != None):
            if l1 == None:
                metaHead.next = l2
                break
            if l2 == None:
                metaHead.next = l1
                break
                
            if l1.val>l2.val:
                metaHead.next = l2
                metaHead = metaHead.next
                l2 = l2.next
            else:
                metaHead.next = l1
                metaHead = metaHead.next
                l1 = l1.next
        
        return ansHead