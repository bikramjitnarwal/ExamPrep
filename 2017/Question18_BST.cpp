/*
The following is a definition of a node in a binary search tree. The member function
secondLargest() returns the key of the second largest key in the binary search tree rooted at the
node.

class TreeNode {
private:
	int value;
	TreeNode *left;
	TreeNode *right;
public:
	int secondLargest();
};

// Pointer to root of the tree
TreeNode* root;

Write the function body of TreeNode::secondLargest() in the box below. The function is
invoked as root->secondLargest() and returns the second largest element of the binary
search tree rooted at root. You may assume that you are always given a tree with at least two
nodes. 
*/

int TreeNode::secondLargest(){
	TreeNode* node = root;
	
	// No node larger than root
	if (root->right == NULL) {
		return root->left;
	}
	else {
		while (node->right->right != NULL) {
			node = node->right;
		}
	}
	return node->value;
}