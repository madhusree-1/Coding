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
struct info{
    int dia;
    int height;
};
info diameter(TreeNode* root){
     if(root == NULL){
            return {0,0};
        }
        // left height,diamter and right height,diameter
        info left = diameter(root->left);
        info right = diameter(root->right);
        info cur;
        cur.height = max(left.height,right.height)+1;
        cur.dia= max(left.height+right.height,max(left.dia,right.dia));
        return cur;
}
    int diameterOfBinaryTree(TreeNode* root) {
        
       info res = diameter(root);
       return res.dia;
    }
};