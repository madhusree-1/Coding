/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* Create_A_Node(int val){
    struct TreeNode* newnode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    newnode->val=val;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}
struct TreeNode* insertIntoBST(struct TreeNode* root, int val) {
    //if root is equal to null .....i.e is base case
    if(root==NULL) return Create_A_Node(val);
    // if val is less than root->val
    if(val<root->val){
        root->left=insertIntoBST(root->left,val);
    }
    //if val is> the root
    else if(val>root->val){
        root->right=insertIntoBST(root->right,val);
    }
    return root;
}