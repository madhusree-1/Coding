bool validate(struct TreeNode* node, long minVal, long maxVal) {
    if (node == NULL) return true;
    if (node->val <= minVal || node->val >= maxVal) return false;
    return validate(node->left, minVal, node->val) &&
           validate(node->right, node->val, maxVal);
}

bool isValidBST(struct TreeNode* root) {
    return validate(root, LONG_MIN, LONG_MAX);
}