class Solution {
public:
    // Corrected sml function to return an integer value
    int sml(TreeNode* root){
        if(root == NULL){
            return INT_MAX; // Assuming INT_MAX as a sentinel value to indicate no valid value
        }
        
        while(root->left){
            root = root->left;
        }
        return root->val;
    }

    TreeNode* deleteNode(TreeNode* root, int key) {
        if (root == NULL){
            return NULL;
        }
        if(key < root->val){
            root->left = deleteNode(root->left, key);
        }
        else if(key > root->val){
            root->right = deleteNode(root->right, key);
        }
        else {
            // Node with only one child or no child
            if(root->left == NULL){
                TreeNode* temp = root->right;
                delete root;
                return temp;
            }
            else if(root->right == NULL){
                TreeNode* temp = root->left;
                delete root;
                return temp;
            }
            // Node with two children: Get the inorder successor (smallest in the right subtree)
            int replace = sml(root->right);
            root->val = replace;
            // Delete the inorder successor
            root->right = deleteNode(root->right, replace);
        }
        return root;
    }
};
