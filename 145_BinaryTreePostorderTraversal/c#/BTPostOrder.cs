/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     public int val;
 *     public TreeNode left;
 *     public TreeNode right;
 *     public TreeNode(int x) { val = x; }
 * }
 */
public class Solution {
    public IList<int> PostorderTraversal(TreeNode root) {
        List<int> ans = new List<int>();
        if(root==null){
            return ans;
        }
        recrusivePostOrder(root, ans);
        return ans;
    }
    
    private void recrusivePostOrder(TreeNode node, List<int> store){
        if(node.left!=null){
            recrusivePostOrder(node.left, store);
        }
        if(node.right!=null){
            recrusivePostOrder(node.right, store);
        }
        store.Add(node.val);
    }
}