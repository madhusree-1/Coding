/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 struct TreeNode* FindMin(struct TreeNode* root){
    // if(root==NULL) return NULL;
    // if(root->left!=NULL) return FindMin(root->left);
    // return root;
    while(root!=NULL && root->left !=NULL) {
        root=root->left;
    }
    return root;
 }
struct TreeNode* deleteNode(struct TreeNode* root, int key) {
    // // if root == null
    // if(root ==NULL ) return  NULL;
    // if(key<root->val){
    //     deleteNode(root->left,key);
    // }
    // else if(key>root->val){
    //     deleteNode(root->right,key);
    // }
    // else{
    //     // for chidren
    //     // for no children
    //     if(root->left ==NULL && root->right==NULL){
    //         free(root);
    //         return NULL;
    //     }
    //     // for one children
    //     else if(root->left==NULL || root->right==NULL){
    //         struct TreeNode* temp=NULL;
    //         if(root->left==NULL){
    //             temp=root->right;
    //         }
    //         else{
    //             temp = root->left;
    //         }
    //         free(root);
    //         return temp;
    //     }
    //     //for two children
    //     else{
    //         struct TreeNode* temp =FindMin(root->right);
    //         root->val = temp->val;
    //         root->right=deleteNode(root->right,temp->val);
    //     }
    // }
    // return root;
    typedef struct TreeNode Node;
    if(root==NULL){
		return NULL;
	}
	else if(key<root->val){
		root->left=deleteNode(root->left,key);// recrusive call
	}
	else if(key>root->val){
		root->right=deleteNode(root->right,key);//recrusive call
	}
	else{
		// having the atleast 2 children
		//1)having no children
		if(root->left==NULL && root->right==NULL){
			free(root);
			return NULL;			
		}
		// one children
		else if(root->left==NULL || root->right ==NULL){//either left node may be null or right node may be null
			Node *temp=NULL;//creating a temporary node 
			if(root->left==NULL){
				temp = root->right;//stores the right node
				free(root);
			}
			else{
				temp =root->left;//stores the left node
				free(root);//free means deleted
			}
			return temp;
		}
		//3)having the two children
		else{
			Node *temp = FindMin(root->right); 
			root->val = temp ->val;
			root->right=deleteNode(root->right,temp->val);
		}
	}
    return root;
}