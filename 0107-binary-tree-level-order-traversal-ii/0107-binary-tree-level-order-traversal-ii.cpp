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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        if(root == NULL){
            return {};
        }
        queue<TreeNode*>q;
        q.push(root);
        vector<vector<int>>res;
        int i = root->val;
        res.push_back({i});
        while(!q.empty()){
            int size = q.size();
            vector<int>ans;
            while(size--){
                TreeNode* cur = q.front();
                q.pop();
                if(cur->left != NULL){
                    q.push(cur->left);
                    ans.push_back(cur->left->val);
                }
                if(cur->right != NULL){
                    q.push(cur->right);
                    ans.push_back(cur->right->val);
                }
            }
            res.push_back(ans);
        }
        reverse(res.begin(),res.end());
        res.erase(res.begin());
        return res;
    }
};