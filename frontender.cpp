#include "frontender.h"

Frontender::Frontender(int age, std::string name, 
	bool isMan, std::string level, std::string style) : Programmer(age, name, isMan, level)
{
	for (std::string i : styles) {
		if (style == i) {
			this->style = style;
			return;
		}
	}
	std::cout << "��������� ����� �� �������������, ��������� ����������� "<<styles[0]<<"\n";
	this->style = styles[0];
}

Frontender::Frontender() : Programmer()
{
	this->style = styles[0];
}

void Frontender::talk()
{
	std::cout << Man::name << " ������������ �� ������������ ������ ����� - "<< style<<std::endl;
}

void Frontender::whoRU()
{
	if (Man::gender == Man::man) {
		std::cout << "��� " << Man::name << " � �� � ���� " << Man::age << " ��� ���� " << level << "-frontend ������������� �� ������ " << style<< "\n";
	}
	else {
		std::cout << "��� " << Man::name << " � ��� � ���� " << Man::age << " ��� ���� " << level << "-frontend ������������� �� ������ " << style << "\n";
	}
}

void Frontender::working() const
{
	
	if (Man::gender == Man::man) {
		std::cout << Man::name << " ���� ���� � ������ ���, ��� ��-�� ���� �������� ���������� :)\n";
	}
	else {
		std::cout << Man::name << " ���� ���� � ������ ���, ��� ��-�� ��� �������� ���������� :)\n";
	}
}

void Frontender::programming() const
{
	std::cout << Man::name<< " ����� ����� '��������' ���\n";
}
