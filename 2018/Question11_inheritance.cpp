/*
#include <iostream>
using namespace std;

class firstOne {
private:
	int x;
	char* first;
public:
	firstOne();
	firstOne(const char* s);
};

class secondOne : public firstOne {
private:
	int y;
	char* second;
public:
	secondOne(const char* s);
	secondOne(int v); 
};

firstOne::firstOne() {
	x = 0;
	first = new char[1];
	first = '\0';
	cout << "Constructor 1 of firstOne done" << endl;
}

firstOne::firstOne(const char* s) {
	x = 0;
	int size = strlen(s);
	first = new char[size+1];
	strcpy(first,s);
	cout << "Constructor 2 of firstOne done" << endl;
}

secondOne::secondOne(const char* s) {
	y = 0;
	int size = strlen(s);
	second = new char[size+1];
	strcpy(second, s);
	cout << "Constructor 1 of secondOne done" << endl;
}
secondOne::secondOne(int v) :firstOne( "X") {
	y = v;
	second = new char[1];
	second = '\0';
	cout << "Constructor 2 of secondOne done" << endl;
} 

int main () {
	firstOne a;
	firstOne b( "G");
	secondOne c ( "N");
	secondOne d(8); 
}

Indicate what each statement in the above main function prints, using the table below. If no output is
produced, write "NONE". 

*/ 


firstOne a;  // Constructor 1 of firstOne done

firstOne b( "G"); // Constructor 2 of firstOne done

secondOne c ( "N"); // Constructor 1 of firstOne done
                    // Constructor 1 of secondOne done

secondOne d(8);		// Constructor 2 of firstOne done
					// Constructor 2 of secondOne done
