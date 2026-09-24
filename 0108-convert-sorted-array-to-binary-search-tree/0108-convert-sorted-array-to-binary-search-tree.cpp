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
   TreeNode* sol(vector<int>& nums,int st,int end){
    if(st>end)return NULL;
    int pos=st+(end-st)/2;
    TreeNode* root=new TreeNode(nums[pos]);
    root->left=sol(nums,st,pos-1);
    root->right= sol(nums,pos+1,end);

    return root;


   }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n=nums.size();
        return sol(nums,0,n-1);
    }
};