#include <iostream>

#include "Animal.h"

int main() {
	Turtle turtle_friend;

	std::cout << turtle_friend.MakeSound() << std::endl;
	
	Penguin penguino_enemy;

	std::cout << penguino_enemy.MakeSound() << std::endl;

	return 0;
}
