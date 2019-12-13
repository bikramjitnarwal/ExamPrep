/*
A 3-way tree is a tree in which each node has up to 2 keys, named keyO and keyl, and up to 3
children, named childO, childl and child2. A 3-way tree is 3-way search-tree (TWST) if for
every node in the tree, the following properties hold:

• The keys in each node are in increasing order, i.e., keyO < keyl
• The keys in the subtree rooted at childO are smaller than keyO
• keyO is smaller than the keys in the subtrees rooted at childl and child2
• The keys in the subtrees rooted at childO and childl are smaller than keyl
• keyl is smaller than the keys in the subtree rooted at child2

The code below shows one possible definition of a node in a TWST tree.
class TWSTnode {
public:
	int keyO; // Initialized to -1 if no key value
	int keyl; // Initialized to -1 if no key value
	TWSTnode* childO; // Initialized to NULL if no child
	TWSTnode* childl; // Initialized to NULL if no child
	TWSTnode* child2; // Initialized to NULL if no child
};
// The root of a TWST
TWSTnode* root;

Write a recursive non-member function that searches a TWST for a node that has a key k as one of
its two keys and returns a pointer to it. It returns NULL if such a node does not exist. 
*/

TWSTnode* TWSTsearch(TWSTnode* r, int k) {
	while (r->child0 != NULL || r->child1 != NULL || r->child2 != NULL) {
		if (k == r->key0 || k == r->key1)
			return r;

		if (k < key0)
			r = r->child0;
		else if (k > key 0 && k < key 1)
			r = r->child1;
		else
			r = r->child2;
	}
	return NULL;
}