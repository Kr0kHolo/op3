#include <teamlead.h>

Teamlead::Teamlead(int age, std::string name, bool isMan):Programmer(age, name, isMan, "senior"), Manager(age, name, isMan, "top")
{

}

Teamlead::Teamlead() :Programmer("senior"), Manager("top")
{

}

void Teamlead::talk()
{
	std::cout <<Man::name<< " рассказывает о перспективах нового проекта\n";
}

void Teamlead::whoRU()
{
	if (Man::gender == Man::man) {
		std::cout << "Это " << Man::name << " и он в свои " << Man::age << " стал тимлидом с навыками: "<<talkLevel<<" уровень общения и "<<level<< std::endl;
	}
	else {
		std::cout << "Это " << Man::name << " и она в свои " << Man::age << " стала тимлидом с навыками: " << talkLevel << " уровень общения и " << level << std::endl;
	}
}

void Teamlead::working() const
{
	std::cout <<Man::name<< " пытается объяснить решение ошибки в коде стажера\n";
}

void Teamlead::programming() const
{
	std::cout << Man::name << " как всегда пилит почти весь проект сам\n";
}
