#include <iostream>
using namespace std; 

#include "Animal.h"

int main() {
  
	Turtle turtle_friend;
  
  std::cout << turtle_friend.MakeSound() << std::endl;
  
  // Gustav Pig
	Pig pig_friend;
	
	std::cout << pig_friend.MakeSound() << std::endl;	
  
	
  // Michael Penguin
	Penguin penguino_enemy;

	std::cout << penguino_enemy.MakeSound() << std::endl;


	// Oliver Tiger instance 
	Tiger tiger_friend; 

	cout << tiger_friend.MakeSound() << endl;

	// Tiger and Turtle fight 
	tiger_friend.Fight(turtle_friend);

	
	return 0;
}
