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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        if(!root){
            return ans;
        }
        recusivePostOrder(root, ans);
        return ans;
    }
private:
    void recusivePostOrder(TreeNode* node, vector<int>& store){
        if(node->left){
            recusivePostOrder(node->left, store);
        }
        
        if(node->right){
            recusivePostOrder(node->right, store);
        }
        store.push_back(node->val);
    }
};