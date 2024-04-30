#include <designer.h>

Designer::Designer(int age, std::string name, bool isMan, std::string style) : Man(age, name, isMan)
{
	for (std::string i : styles) {
		if (style == i) {
			this->style = style;
			return;
		}
	}
	std::cout << "��������� ����� �� �������������, ��������� ����������� PixelArt";
	this->style = styles[0];
}

Designer::Designer() : Man()
{
	this->style = styles[0];
}

void Designer::talk()
{
	std::cout << name << " ������������ � ������� ���������� �������� � ��������� ������� ��������\n";
}

void Designer::whoRU()
{
	if (gender == man) {
		std::cout << "��� " << name << " � �� � ���� " << age << " ��� �������� �������� � ����� " << style << std::endl;
	}
	else {
		std::cout << "��� " << name << " � ��� � ���� " << age << " ��� ��������� �������� � ����� " << style << std::endl;
	}
}

void Designer::working() const
{
	std::cout << name<< " ����������� ����� UI ��� ���������� �� ��������\n";
}
