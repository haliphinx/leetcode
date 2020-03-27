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
    public int KthSmallest(TreeNode root, int k) {
        int[] ans = {k,0};
        recrusiveTravel(root, ans);
        return ans[1];
    }
    
    public bool recrusiveTravel(TreeNode node, int[] k){
        if(node.left!=null){
            if(recrusiveTravel(node.left, k)){
                return true;
            }
        }
        
        if(k[0] == 1){
            k[1] = node.val;
            return true;
        }
        
        k[0]--;
        
        if(node.right!=null){
            if(recrusiveTravel(node.right, k)){
                return true;
            }
        }
        
        return false;
    }
}