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
    int check(TreeNode* root, int& diameter){
        if(root==NULL) return 0;
        int lt = check(root->left,diameter);
        int rt =check(root->right,diameter);
        diameter = max(lt+rt,diameter);
        return 1+ max(lt,rt);
    }
    
    
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter =0; 
        check(root, diameter);
        return diameter;
    }
    
};