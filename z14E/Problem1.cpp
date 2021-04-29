#include <iostream>
#include <string>
using std::cout;   using std::endl;
using std::string; using std::ostream;

class Animal {
public:
	virtual string voice() const = 0;
	virtual int legs()     const = 0;
	string getSpecies() const { return this->species; }
	string getName()    const { return name; }
	Animal(string name) { this->name = name; }
protected:
	string species;
	string name;
	friend ostream& operator<<(ostream& s, const Animal& a) {
		return s << a.getSpecies() << " " << a.getName() << ", " << a.legs() <<
			"legs, voice: "<< a.voice() << endl;
	}
	friend ostream& operator<<(ostream& s, const Animal* p) {
		return s << p->getSpecies() << " " << p->getName() << ", " << p->legs() <<
	"legs, voice: " << p->voice() << endl;
	}
};


class Cat : public Animal {
public:
	Cat(string name) : Animal(name){
		species = "Cat";
	}
	string voice() const override { return "Moew";}
	int legs() const override { return 4;}
	
};

class Snake : public Animal {
public:
	Snake(string name) : Animal(name) {
		species = "Snake";
	}

	string voice() const override { return "Ssss"; }
	int legs() const override { return 0; }
};

int main() {
	Cat cat1("Oliver"), cat2("Sophie");
	Snake snake("Wire");
	Animal* arr[] = { &cat1,&cat2,&snake };
	for (const auto& a : arr) cout << *a << endl;
	cout << endl;
	for (const auto& a : arr) cout << a << endl;
	system("pause");
}