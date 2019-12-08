/*
Write a recursive function called printReverse (int* array, int start, int end)
that prints the elements of an integer array in reverse. For example, given the following 4-element
array a: 

a: |0|9|1|2|

The function invoked as printReverse (a, 0, 3) prints to the standard output (using cout):
2 1 9 0

Write your answer below. 
*/
#include <iostream>
using namespace std;

void printReverse(int *array, int start, int end) { 
	if(start == end){
		cout << array[end] << " ";
		return;
	}
	
	printReverse(array, start + 1, end);
	cout << array[start] << " ";
}