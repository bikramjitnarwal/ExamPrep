/*
Given a binary tree, you need to write a function to check if that tree is a mirror of itself. A tree is a
mirror of itself if it is symmetric around its root.

For example the binary tree on the left below is a mirror. In contrast, the binary tree on the right
below is not a mirror. 
  
                      1                       1
                     / \                     / \
                    /   \                   /   \ 
                   2     2                 2     2
                  / \   / \                 \     \
                 4   7 7   4                 5     5
 
 
Given the class definition of a TreeNode shown below, write a recursive function isSyrnmetric
that returns true if the tree is a mirror, otherwise, it returns false.
	class TreeNode {
	public:
		int val;
		TreeNode *left;
		TreeNode *right;
		TreeNode* root;
	 };
*/

// This is how the function is called
// isSyrnmetric(root->left, root->right);

bool isSymmetric(TreeNode *n1, TreeNode *n2) {
	if (n1 == NULL && n2 == NULL) {
		return true;
		
	} else if (n1 == NULL || n2 == NULL) {
		return false;
	}
	
	if (n1->val != n2->val) {
		return false;
	}
	return isSymmetric(n1->left,n2->right) && isSymmetric(n1->right, n2->left); 
}
