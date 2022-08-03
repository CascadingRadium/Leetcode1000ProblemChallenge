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
    TreeNode* cloneBinaryTree(TreeNode* root)
    {
        if (root == nullptr) {
            return nullptr;
        }
        TreeNode* root_copy = new TreeNode(root->val);
        root_copy->left = cloneBinaryTree(root->left);
        root_copy->right = cloneBinaryTree(root->right);
        return root_copy;
    }
    
    vector<TreeNode*> generateTrees(int n) 
    {
        vector<TreeNode*> ret;
        ret.push_back(new TreeNode(1));
        for(int i=2;i<=n;i++)
        {
            vector<TreeNode*> temp;
            for(int j=0;j<ret.size();j++)
            {
                TreeNode* newNode= new TreeNode(i);
                TreeNode* copy= cloneBinaryTree(ret[j]);
                newNode->left=copy;
                temp.push_back(newNode);
            }
            for(int j=0;j<ret.size();j++)
            {
                TreeNode* copy_out= cloneBinaryTree(ret[j]);
                TreeNode* cur=copy_out;
                int rcount=0;
                while(cur->right!=NULL)
                {
                    TreeNode* newNode= new TreeNode(i);
                    TreeNode* copy= cloneBinaryTree(ret[j]);
                    TreeNode*inCur=copy;
                    for(int i=0;i<rcount;i++)
                        inCur=inCur->right;
                    TreeNode* newLeft=inCur->right;
                    inCur->right=newNode;
                    newNode->left=newLeft;
                    temp.push_back(copy);
                    cur=cur->right;
                    rcount++;
                }
                TreeNode* newNode= new TreeNode(i);
                cur->right=newNode;
                temp.push_back(copy_out);
                
            }
            ret.swap(temp);
        }
        return ret;
    }
};