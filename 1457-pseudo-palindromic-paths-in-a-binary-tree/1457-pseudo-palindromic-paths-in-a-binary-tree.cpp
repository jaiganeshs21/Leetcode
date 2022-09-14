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
    
    bool isPalindromePath(vector<int>& counts)
    {
        int num_odds = 0;
        for(int i = 1; i < 10; i++)
        {
            if(counts[i] % 2) num_odds++;
        }
        if(num_odds > 1) return false;
        return true;
    }
    
    void DFS(TreeNode* root, vector<int>& counts, int& num_palindrome_paths)
    {
        counts[root->val] += 1;
        
        if(root->left != nullptr) DFS(root->left, counts, num_palindrome_paths);
        if(root->right != nullptr) DFS(root->right, counts, num_palindrome_paths);
        
        if(root->left == nullptr && root->right == nullptr)
        {
            if(isPalindromePath(counts)) num_palindrome_paths++;
        }
        
        counts[root->val] -= 1;
        
        return;
    }
    
    int pseudoPalindromicPaths (TreeNode* root) {
        
        int num_palindrome_paths = 0;
        vector<int> counts(10);
        DFS(root, counts, num_palindrome_paths);
        
        return num_palindrome_paths;
    }
};
