/*
Consider the following class definitions of a node in a linked list and a linked list. The function
List::reverse () reverses the linked list pointed to be List::head. Thus, in the example
below, the invocation of the function as mylist.reverse() 

class Node {
private:
	int data;
	Node *next;
public:
	int getData() const { return data; }
	Node *getNext() const { return next; }
};

class List {
private:
	Node *head;
public:
	void reverse(); // You write this function
};

Write the function body of List::reverse () in the box below. Your program will be marked by
correctness and simplicity.  
*/

// May be wrong, but will fix soon 

void List::reverse(){
	Node *prev = NULL;
	Node *current = head;
	
	while(current != NULL){
		next = next.getNext();
		current.getNext() = prev;
		
		prev = current;
		current = next;
	}
	head = prev;
} 