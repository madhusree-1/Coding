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
long long maxi =0;
long long sum =0;
    int totalSum(TreeNode* root){
        if(root == NULL){
            return 0;
        }
        return root->val+totalSum(root->left)+totalSum(root->right);
    }
    long long dfs(TreeNode* root){
        if(root == NULL){
            return 0;
        }
        long long left = dfs(root->left);
        long long right = dfs(root->right);
        long long present = root->val+left+right;
        maxi = max(maxi,present*(sum-present));
        return present;
    }
    int maxProduct(TreeNode* root) {
        //find the sum
        sum = totalSum(root);
        // long long maxi =0;
        // long long ans =0;
        dfs(root);
        // queue<TreeNode*>q;
        // q.push(root);
        // while(!q.empty()){
            // TreeNode* cur = q.front();
            // q.pop();
        //     long long present = totalSum(cur);
        //     long long product =static_cast<long long> (present *(sum - present)) ;
        //     if(maxi < product){
        //         maxi = product;
        //     }
        //     // if(cur->left != NULL){
        //     //     q.push(cur->left);
        //     // }
        //     // if(cur->right != NULL){
        //     //     q.push(cur->right);
        //     // }
        // // }
        return maxi % 1000000007;
    }
};