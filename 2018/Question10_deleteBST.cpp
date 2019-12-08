/*
Assume the following simplified definition of TreeNode.
 * 
class TreeNode {
public:
    int key;
	TreeNode *left;
	TreeNode *right;
};
 * 
Assume that your program creates a binary search tree with a pointer to its root node called root.
Write the destructor of TreeNode so that the following statement deletes all the nodes in your tree
(unlike your lab assignment).

delete root; 
 */
TreeNode::~TreeNode(){ 
	deleteBST(root);
{

void deleteBSR(TreeNode *root){
	if(root == NULL) return;
	
	deleteBST(root->left);
	deleteBST(root->right);
	free(root);
}
