/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        int ans = 0;
        bool res = recruciveTravel(root, k, ans);
        return ans;
    }
private:
    //LDR
    bool recruciveTravel(TreeNode* node, int& k, int& ans){
        //left sub-tree
        if(node->left!=NULL){
            if(recruciveTravel(node->left, k, ans)){
                return true;
            }
        }
        
           
        if(k==1){
            ans = node->val;
            return true;
        }
        
        k--;
         
        //right sub-tree
        if(node->right!=NULL){
            if(recruciveTravel(node->right, k, ans)){
                return true;
            }
        }
        return false;
           
    }
};