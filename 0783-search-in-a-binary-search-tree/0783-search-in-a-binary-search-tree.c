/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* searchBST(struct TreeNode* root, int target) {
    //struct TreeNode*temp=root;
    //while(temp!=NULL){
    if(root == NULL || target==root->val){
        return root;
    } 
    if(target<root->val){
        return searchBST(root->left,target);
    }
    return searchBST(root->right,target);
  //  }
    //return NULL;
}