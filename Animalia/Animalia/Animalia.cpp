#include "Animalia.h"
#include<iostream>

int Mammal::Speak()
{
	std::cout << "...melifluous noise...";
	return 0;
}

int Animal::Age(int curYear)
{
	//curYear - birthYear == age
	return curYear - birthYear;
}

Mammal::Mammal(Sex s, int year) : Animal(s, year), hair(NORMAL)
{
	IsEndothermic = true;
}

int Human::Speak()
{
	if (GetThoughts() == "yes")
		std::cout << GetWords();
	else
		std::cout << "No interest in talking right now. \n";
}
