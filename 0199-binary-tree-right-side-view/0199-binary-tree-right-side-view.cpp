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

    vector<int>sol(TreeNode* root,vector<int>&ans,int count){
             if(root==NULL)return {};
     
     
       if(count==ans.size()){
        ans.push_back(root->val);
       }
       sol(root->right,ans,count+1);
        sol(root->left,ans,count+1);
return ans;
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
       return sol(root,ans,0);
    }
};