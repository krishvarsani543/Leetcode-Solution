
class Solution {
public:
    void preorder(TreeNode* root, vector<int>& ans) {
        if (root == NULL) return;

        ans.push_back(root->val);  // 1. Root
        preorder(root->left, ans); // 2. Left
        preorder(root->right, ans);// 3. Right
    }

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        preorder(root, ans);
        return ans;
    }
};
