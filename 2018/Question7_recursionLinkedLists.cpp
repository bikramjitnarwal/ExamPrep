/*

Consider the two classes ListNode and LinkedList used to implement a linked list. They are
not unlike the ones described in class or those you implemented in the lab. Only the class members
relevant to the question are shown. 

class ListNode {
private:
	int id; 
	ListNode *next;
public:
	ListNode *getNext(){
		return next;
	}
};

class LinkedList {
private:
	ListNode* head;
public: 
	ListNode* getTail(); 
};

Write a recursive member function of LinkedList that returns a pointer to the last node in the list.
If the list is empty it should return NULL. You may add new data members or methods to the classes. 
*/

// Not correct yet, but will update soon

ListNode* LinkedList::getTail(){
	traverse(head);
}

void traverse(ListNode* head){
	if(head == NULL){
		return NULL;
	}
	// Traverse since head is not pointing to nothing 
	return traverse(head->next);
	// Only comes here once head points to nothing (means we are at the last node)
	// We want a point to where head is currently at (the last node)
	ListNode *ptr = head;
	return;
}





