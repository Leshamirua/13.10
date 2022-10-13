#pragma once
#include <iostream>
#include "interface.h"
using namespace std;
class Animal:public IAnimal
{
protected:
	string name;
	double kg;
	string continent;
	int distance;
public:
	Animal() = default;
	Animal(string n, double k, string c,int d) {
		name = n;
		kg = k;
		continent = c;
		distance = d;
	}
	virtual void Print() {
		cout << "name = " << name << "\nkg = " << kg << "\ncontinent = " << continent <<"\ndistance treveled = "<<distance<<endl;
	}
};
class Parrot :public Animal, public IFly {
public:
	Parrot() = default;
	Parrot(string n, double k, string c,int d) :Animal(n, k, c, d) {}
	//реализация интерфейса IAnimal
	virtual void Eat() {
		cout <<"Parrot eats snacks\n";
	}
	virtual void Move() {
		distance += 3;
	}
	virtual void Fly() {
		distance += 11;
	}
};
class Pinguin :public Animal, public ISwim{
public:
	Pinguin() = default;
	Pinguin(string n, double k, string c, int d) :Animal(n, k, c, d) {};
	virtual void Eat() {
		cout << "Pinguin eats fish" << endl;
	}
	virtual void Move() {
		distance += 3;
	}
	virtual void Swim() {
		distance += 7;
	}
};
class Cat :public Animal {
public:
	Cat() = default;
	Cat(string n, double k, string c, int d) :Animal(n, k, c, d) {};
	virtual void Eat() {
		cout << "Cat eats fish and meat" << endl;
	}
	virtual void Move() {
		distance += 6;
	}
};
class Dog :public Animal {
public:
	Dog() = default;
	Dog(string n, double k, string c, int d) :Animal(n, k, c, d) {};
	virtual void Eat() {
		cout << "Dog eats meat and bones" << endl;
	}
	virtual void Move() {
		distance += 5;
	}
};
class Dolphin :public Animal, ISwim {
public:
	Dolphin() = default;
	Dolphin(string n, double k, string c, int d) :Animal(n, k, c, d) {};
	virtual void Eat() {
		cout << "Dolphin eats fish and pluncton" << endl;
	}
	virtual void Move() {
		distance += 0;
		cout << "he can't move on the ground :(((" << endl;
	}
	virtual void Swim() {
		distance += 10;
	}
};