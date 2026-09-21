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
bool krish(TreeNode* p,TreeNode* q){
    if(p==NULL&&q==NULL)return true;
    if(p==NULL||q==NULL)return false;
    if(p->val!=q->val)return false;
   
    return krish(p->left,q->right)&&krish(p->right,q->left);

    }
    bool isSymmetric(TreeNode* root) {
return krish(root->left,root->right);
        
    }
};