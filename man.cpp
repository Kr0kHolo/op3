#include <man.h>


Man::Man(int age, std::string name, bool isMan) {
	this->age = age;
	this->name = name;
	this->gender = (isMan ? man : women);
}

Man::Man() {
	this->age = 19;
	this->name = "¬лад";
	this->gender = man;
}

void Man::walk() {
	if (gender == man) {
		std::cout << name << " идет в развалочку\n";
	}
	else {
		std::cout << name << " из€щно перемещаетс€\n";
	}
}

void Man::whoRU()
{
	if (gender == man) {
		std::cout << "Ёто "<<name<< " и ему " << age<< " лет";
	}
	else {
		std::cout << "Ёто " << name << " и ей " << age << " лет";
	}
}

void Man::talk() {
	if (gender == man) {
		std::cout << name << " говорит уверенно\n";
	}
	else {
		std::cout << name << " говорит очень тихо\n";
	}
}