# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def postorderTraversal(self, root: TreeNode) -> List[int]:
        ans = []
        if None==root:
            return ans
        self.recrusivePostOrder(root, ans)
        return ans
    
    def recrusivePostOrder(self, node: TreeNode, store: list):
        if node.left != None:
            self.recrusivePostOrder(node.left, store)
        if node.right != None:
            self.recrusivePostOrder(node.right, store)
            
        store.append(node.val)