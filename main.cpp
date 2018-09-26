#include <iostream>
using namespace std; 

#include "Animal.h"

int main() {
	Turtle turtle_friend;

	cout << turtle_friend.MakeSound() << endl;

	// Oliver Tiger instance 
	Tiger tiger_friend; 

	cout << tiger_friend.MakeSound() << endl;

	// Tiger and Turtle fight 
	tiger_friend.Fight(turtle_friend);

	
	return 0;
}
