/*
Write a recursive function to perform the odd-even-order traversal of a binary tree, meaning that for
each node of the tree, the function always visits the node first. Then if the key of the node is odd, the
function traverses the left subtree (in odd-even-order) followed by the right subtree (also in oddeven-order). 
However, if the key of the node is even, the function traverses the right subtree (in oddeven-order) followed 
by the left subtree (also in odd-even-order).

Hint: The % operator can be used to determine if the integer key is odd or even.
Assume that visiting a node simply prints its key to cout. Your code should be less than 10 lines
of code! Long code will be penalized!

You may assume the following declarations:
class treenode {
public:
	int data;
	treenode *left;
	treenode *right;
	treenode *Root; // root of the tree 
};
*/

void oddevenorder(treenode *rt) {
	if (rt == NULL)
		return;
	cout << rt->data << endl; // visits node first

	if (rt % 2 == 0) {
		//even
		oddevenorder(rt->right);
	}
	else
		oddevenorder(rt->left);
}