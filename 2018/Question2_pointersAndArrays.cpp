#include <iostream>
using namespace std;

/*
In the blank space for each part (a) - (d) below, provide the declaration and initialization of the
variable i (for example: mt ± = 10;). Your initialization of i must make use of the variable 1,
and lead to the expected output when used in the statements that follow it. 
*/
 
int main(int argc, char **argv)
{
	// part a)
	int j = 10;
	// declare and initialize i: 
	int *i = &j;
	
	cout << *i << endl; // 10
	j = 5;
	cout << *i << endl; //5
	
	// part b)
	int j = 10; 
	// declare and initialize 1:
	int i = j;
	cout << i << endl; // 10
	j = 5;
	cout << i << endl; // 10
	
	// part c)
	int j = 10; 
	// declare and initialize 1:
	int i[2] = {j, j};
	cout << i[0] << endl; // 10
	j = 5;
	cout << i[1] << endl; // 10
	 
	// part d)
	int j = 10; 
	// declare and initialize i:
	int *i[2] = {&j, &j}; // array of pointers
	cout << *(i[0]) << endl; // 10
	j = 5;
	cout << *(i[1]) << endl; // 5
	
	return 0;
}
