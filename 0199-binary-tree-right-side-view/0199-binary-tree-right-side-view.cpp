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
void solution(TreeNode* root,vector<int>&ans){
    if(root==NULL)return;
    queue<TreeNode*>q;
    q.push(root);
     int leval=0;
    
    while(!q.empty()){
        int n=q.size();
        map<int,TreeNode*>m;
   
    leval++;
        for(int i=0;i<n;i++){
            TreeNode* val=q.front();
            q.pop();
            m[leval]=val;
         if(val->left)q.push(val->left);
         if(val->right)q.push(val->right);
        }
ans.push_back(m[leval]->val);
   
    }
}
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        solution(root,ans);
        return ans;

    }
};