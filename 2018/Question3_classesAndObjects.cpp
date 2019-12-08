/*

#include "YetAnotherMystery . h"
class Mystery {
private:
	YetAnotherMystery* mystery_variable;
	-Mystery();
public:
	Mystery();
	Mystery(const Mystery & other);
	Mystery & operator=(const Mystery & rhs);
	void operateOnMystery();
	void print () const;

Shannon wrote a nonmember function that has the following prototype:
void mysterious ();

The function creates a Mystery object and would like to delete the object to avoid a memory leak.
However, it cannot because the destructor of Mystery is private. Amy wants to allow only
Shannon's non-member function to delete Mystery objects but still prevent all other non-member
functions from doing the same. She wants to do so without making Shannon's function a member of
her class.

Amy needs to add only one line to her mystery . h. No other modifications to mystery . h are
allowed.
Write the line Amy should add
*/

friend void mysterious (); // added as a friend 
