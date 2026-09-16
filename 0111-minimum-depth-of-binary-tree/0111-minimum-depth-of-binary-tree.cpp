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
    int minDepth(TreeNode* root) {
  
       if(root==NULL)return 0; 
        int y=minDepth(root->right);
        int x=minDepth(root->left);
         
        if (x == 0)
            return y + 1;

        if (y == 0)
            return x + 1;     
        return min(x,y)+1;
    }
};