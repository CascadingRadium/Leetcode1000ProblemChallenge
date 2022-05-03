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
    void postorder(TreeNode* root,vector<int> &nums)
    {
        if(root)
        {
            postorder(root->left,nums);
            postorder(root->right,nums);
            nums.push_back(root->val);
        }
    }
    vector<int> postorderTraversal(TreeNode* root) 
    {
        vector<int>tr;
        postorder(root,tr);
        return tr;
        
    }
};