#include <iostream>
using namespace std;

class BSTNode {
public:
	int val;
	BSTNode *left.
	BSTNode *right; 
};

/*
Given a binary search tree, write a non-member function called print InRange that prints all the
keys in the binary search tree that fall within a given range in sorted order.
For example, given the following binary search tree
 * 
 *            8
 *           / \
 *          3   10
 *         / \    \
 *        1   6    14
 *           / \   /
 *          4   7 13
 * 
and the range 5 and 13, the function output is: 6 7 8 10 13.
Note that the range values are inclusive (i.e., a key is printed if it is equal to the given lower or upper
bound). Write your answer below.
*/

bool printlnRange(BSTNode root, int lowerBound, int upperBound) { 
	if(root == NULL){
		return;
		
	if(lowerBound < root->val){
		printlnRange(root->left, lowerBound, upperBound); 
	}
	
	if(lowerBound <= root->val && upperBound <= root->val){
		cout << root->val << " ";
	}
	
	if(lowerBound > root->val){
		printlnRange(root->right, lowerBound, upperBound); 
	}
}