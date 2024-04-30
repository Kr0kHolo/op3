#include <manager.h>

Manager::Manager(int age, std::string name, bool isMan, std::string talkLevel) : Man(age, name, isMan)
{
	if (talkLevel == "low") this->talkLevel = low;
	else if (talkLevel == "middle") this->talkLevel = middle;
	else if (talkLevel == "top") this->talkLevel = top;
	else this->talkLevel = low;
}

Manager::Manager(std::string level) : Man()
{
	if (talkLevel == "low") this->talkLevel = low;
	else if (talkLevel == "middle") this->talkLevel = middle;
	else if (talkLevel == "top") this->talkLevel = top;
	else this->talkLevel = low;
}

Manager::Manager() : Man()
{
	this->talkLevel = low;
}

void Manager::talk()
{
	if (talkLevel == low) std::cout << name << " ���������� �������� ������ �������� ����������\n";
	else if (talkLevel == middle) std::cout << "� "<< name << " ����� ���������� ������ �������� ����������\n";
	else if (talkLevel == top) std::cout<<  "� " << name << " ���������� ������ �������� ����������, ��� ��� ���������� ��������\n";
}

void Manager::whoRU()
{
	if (gender == man) {
		std::cout << "��� " << name << " � �� � ���� " << age << " ��� ���� ���������� � ������� ��������� - " <<talkLevel<<  "\n";
	}
	else {
		std::cout << "��� " << name << " � ��� � ���� " << age << " ��� ����� ���������� � ������� ��������� - " << talkLevel << "\n";
	}
}

void Manager::working() const
{
	std::cout << name << " ��� ������ ������ �� ����� ���� � ������";
}
