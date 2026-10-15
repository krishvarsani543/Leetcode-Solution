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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root==NULL)return{};
             int leval=0;
        deque<pair<TreeNode*,int>>d;
         d.push_back({root,leval});
         vector<vector<int>>ans;
        while(d.size()>0){
             int n=d.size();
             vector<int>krish;
             
             for(int i=0;i<n;i++){
                TreeNode* t;
                if (leval % 2 == 0) {
                 t = d.front().first;
                    d.pop_front();
                     krish.push_back(t->val);
                } else {
                   t = d.back().first;
                    d.pop_back();
                     krish.push_back(t->val);
                }
               

  if(t->left&&leval%2==0)d.push_back({t->left,leval+1});
   if(t->right&&leval%2==0)d.push_back({t->right,leval+1});
   if(t->right&&leval%2!=0)d.push_front({t->right,leval+1});
              if(t->left&&leval%2!=0)d.push_front({t->left,leval+1});
              
                

             }
          ans.push_back(krish);
         leval++;
            
         
        }
        return ans;
    }
};