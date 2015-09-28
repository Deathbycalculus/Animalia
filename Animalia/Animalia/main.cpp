#include "Animalia.h"
#include<iostream>

int main()
{
	Mammal herbert(MALE, 1977, EXTREME); //What's wrong with Herbert?
	herbert.Speak();
	std::cout << std::endl << "Herbert is now " << herbert.Age(2015) << " years old." << std::endl;
	return 0;
}