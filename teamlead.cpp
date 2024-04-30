#include <teamlead.h>

Teamlead::Teamlead(int age, std::string name, bool isMan):Programmer(age, name, isMan, "senior"), Manager(age, name, isMan, "top")
{

}

Teamlead::Teamlead() :Programmer("senior"), Manager("top")
{

}

void Teamlead::talk()
{
	std::cout <<Man::name<< " ������������ � ������������ ������ �������\n";
}

void Teamlead::whoRU()
{
	if (Man::gender == Man::man) {
		std::cout << "��� " << Man::name << " � �� � ���� " << Man::age << " ���� �������� � ��������: "<<talkLevel<<" ������� ������� � "<<level<< std::endl;
	}
	else {
		std::cout << "��� " << Man::name << " � ��� � ���� " << Man::age << " ����� �������� � ��������: " << talkLevel << " ������� ������� � " << level << std::endl;
	}
}

void Teamlead::working() const
{
	std::cout <<Man::name<< " �������� ��������� ������� ������ � ���� �������\n";
}

void Teamlead::programming() const
{
	std::cout << Man::name << " ��� ������ ����� ����� ���� ������ ���\n";
}
