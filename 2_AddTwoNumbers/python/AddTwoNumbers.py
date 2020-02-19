# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def addTwoNumbers(self, l1: 'ListNode', l2: 'ListNode') -> 'ListNode':
        res_head = ListNode(0)
        meta = res_head
        carry = 0
        while (l1 != None) or (l2 != None) or (carry != 0):
            meta.next = ListNode(0)
            meta = meta.next
            mSum = carry
            if l1 != None:
                mSum += l1.val
                l1 = l1.next
            if l2 != None:
                mSum += l2.val
                l2 = l2.next
            meta.val = mSum%10
            carry = mSum//10
            
        return res_head.next
        