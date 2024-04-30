#include <man.h>


Man::Man(int age, std::string name, bool isMan) {
	this->age = age;
	this->name = name;
	this->gender = (isMan ? man : women);
}

Man::Man() {
	this->age = 19;
	this->name = "����";
	this->gender = man;
}

void Man::walk() {
	if (gender == man) {
		std::cout << name << " ���� � ����������\n";
	}
	else {
		std::cout << name << " ������ ������������\n";
	}
}

void Man::whoRU()
{
	if (gender == man) {
		std::cout << "��� "<<name<< " � ��� " << age<< " ���";
	}
	else {
		std::cout << "��� " << name << " � �� " << age << " ���";
	}
}

void Man::talk() {
	if (gender == man) {
		std::cout << name << " ������� ��������\n";
	}
	else {
		std::cout << name << " ������� ����� ����\n";
	}
}