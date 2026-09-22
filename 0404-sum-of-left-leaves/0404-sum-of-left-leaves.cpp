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
      void krish(TreeNode* root,int &sum,bool is){
      if(root==NULL)return;
       if(root->left==NULL&&root->right==NULL&&is==true){
                  sum+=root->val;
                  return;
       }
            krish(root->left,sum,true);
   
       
            krish(root->right,sum,false);
        
            
            
        
       
      }
    int sumOfLeftLeaves(TreeNode* root) {
        int sum=0;
         krish(root,sum,false);
        return sum;
    }
};