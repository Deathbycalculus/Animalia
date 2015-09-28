#include <string>
using namespace std;

#ifndef ANIMALIA_H
#define ANIMALIA_H


/*
The classes Animal and Mammal have already been made for you by another team. Your mission, should you choose to
accept it, is to extend Animal meaningfully by creating another subtype in addition to Mammal, one of them mythological.

When you're done with that, go another round by extending Mammal to include two other mammals, one of them human and the
other non-human.

Human should have powers of speech and thought, represented by class methods that do something entertaining.

Humans must think before speaking, but do not have to think very well, depending on the type of human you are trying
to simulate.

Your non-human type can have powers of speech, but do not have to have powers of thought.

Kudos, and possibly more, for entertaining Matt.
*/

enum Sex {MALE, FEMALE, HERM};
enum HairType {BALD, NORMAL, EXTREME};
enum FoodType {Carnivore, Omnivore, Herbivore};

class Animal
{
private:
	Sex sex;
	int birthYear;
	FoodType Eats;
	
public:
	Animal(Sex s, int year, FoodType E) : sex(s), birthYear(year), Eats(E) { }
	int Age(int);
	bool IsEndothermic;
};

class Mammal : public Animal
{
private:
	HairType hair;
	string speak;
	
public:
	Mammal(Sex s, int year, FoodType E) : Animal(s,year, E), hair(NORMAL) { } // Default hairtype is normal
	Mammal(Sex s, int year, FoodType E, HairType h) : Animal(s, year, E), hair(h) { } // Otherwise, let them set the hairtype
	int Speak();
};

class Human : public Mammal
{
private:
	string Thoughts;
	string Words;
	string Name;
public:
	Human(Sex s, int year, string n, FoodType E) : Mammal(s, year, E), Name(n) {};
	int Speak();
	string GetName() { return Name; }
	string GetWords() { return Words;}
	string GetThoughts() { return Thoughts; }
};

class Reptile : public Animal
{
	
private:
	int scales;
	int DangerLevel;
public:
	Reptile(Sex s, int year, FoodType E) : Animal(s, year, E) {};
};

#endif