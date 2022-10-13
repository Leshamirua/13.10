#include "Animal.h"
#include "interface.h"
using namespace std;
int main() {
	IAnimal* ptr = nullptr;
	ptr = new Parrot("Ara", 2, "Africa",4);
	ptr->Eat();
	ptr->Move();
	Parrot* p = static_cast<Parrot*>(ptr);
	p->Print();
	IFly* ifly = p;
	ifly->Fly();
	delete ptr;

	cout << endl;

	ptr = new Cat("Murra", 6, "Europe", 2);
	ptr->Eat();
	ptr->Move();
	Cat* c = static_cast<Cat*>(ptr);
	c->Print();
	delete ptr;

	cout << endl;

	ptr = new Dog("Sharik", 8, "Europe", 4);
	ptr->Eat();
	ptr->Move();
	Dog* d = static_cast<Dog*>(ptr);
	d->Print();
	delete ptr;

	cout << endl;

	ptr = new Pinguin ("King", 6, "Antarctica", 4);
	ptr->Eat();
	ptr->Move();
	Pinguin* pn = static_cast<Pinguin*>(ptr);
	pn->Print();
	ISwim* iSwim = pn;
	iSwim->Swim();
	delete ptr;

	cout << endl;

	ptr = new Dolphin("Chernomorka", 15, "Europe", 4);
	ptr->Eat();
	ptr->Move();
	Pinguin* dol = static_cast<Pinguin*>(ptr);
	dol->Print();
	ISwim* iswim = dol;
	iswim->Swim();
	delete ptr;

	cout << endl;


	return 0;
}