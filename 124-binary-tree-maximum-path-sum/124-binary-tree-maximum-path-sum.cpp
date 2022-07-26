/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int check(TreeNode* root, int& mx){
        if(root==NULL) return 0;
        int lt = max(0,check(root->left,mx));
        int rt = max(0,check(root->right,mx));
        mx=max(mx,lt+rt+root->val);
        return max(lt,rt) + root->val;
    }
    int maxPathSum(TreeNode* root) {
        int mx=INT_MIN;
        check(root,mx);
        return mx;
    }
};