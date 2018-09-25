#include <iostream>

#include "Animal.h"

int main() {
	Turtle turtle_friend;
	Pig pig_friend;
	
	std::cout << turtle_friend.MakeSound() << std::endl;
	std::cout << pig_friend.MakeSound() << std::endl;	

	return 0;
}
