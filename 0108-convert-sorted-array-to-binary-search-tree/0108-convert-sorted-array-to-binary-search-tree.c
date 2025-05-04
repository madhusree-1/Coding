/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
*     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
typedef struct TreeNode Node;
Node* CreateANode(int val){
	Node*newnode = (Node*)malloc(sizeof(Node));
	newnode->val=val;
	newnode->left=NULL;
	newnode->right=NULL;
	return newnode;
}
//Node* root=NULL;
// making the sorted array to bianry search ttree
Node *sortArrayToBst(int *arr,int low,int high){
	if(low>high) return NULL;
	int mid=(low+high+1)/2;
	Node*root = CreateANode(arr[mid]);//creating a node
	// left subtree
	root->left = sortArrayToBst(arr,low,mid-1);//making recursive call
	//right subtree
	root->right = sortArrayToBst(arr,mid+1,high);	
	return root;
}
///given function in leetcode
Node *sortedArrayToBST(int *arr,int numsSize){
	return sortArrayToBst(arr,0,numsSize-1);
}
// }
// void PreOrder(Node* root){
// 	if(root==NULL) return;
// 	printf("%d ",root->val);
// 	PreOrder(root->left);
// 	PreOrder(root->right);
// }