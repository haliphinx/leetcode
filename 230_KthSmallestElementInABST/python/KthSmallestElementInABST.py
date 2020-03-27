# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def kthSmallest(self, root: TreeNode, k: int) -> int:
        recu = [k,0]
        self.recusiveTravel(root, recu)
        return recu[1]
    
    
    def recusiveTravel(self, node: TreeNode, reList: list) -> bool:
        
        if node.left:
            if self.recusiveTravel(node.left, reList):
                return True
        
        if reList[0]==1:
            reList[1]=node.val
            return True
        
        reList[0]-=1
        
        if node.right:
            if self.recusiveTravel(node.right, reList):
                return True
        
        return False