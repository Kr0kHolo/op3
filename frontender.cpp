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
	std::cout << "ѕодобного стил€ не предусмотрено, поставлен стандартный "<<styles[0]<<"\n";
	this->style = styles[0];
}

Frontender::Frontender() : Programmer()
{
	this->style = styles[0];
}

void Frontender::talk()
{
	std::cout << Man::name << " рассказывает об особенност€х своего стил€ - "<< style<<std::endl;
}

void Frontender::whoRU()
{
	if (Man::gender == Man::man) {
		std::cout << "Ёто " << Man::name << " и он в свои " << Man::age << " лет стал " << level << "-frontend разработчиком со стилем " << style<< "\n";
	}
	else {
		std::cout << "Ёто " << Man::name << " и она в свои " << Man::age << " лет стал " << level << "-frontend разработчиком со стилем " << style << "\n";
	}
}

void Frontender::working() const
{
	
	if (Man::gender == Man::man) {
		std::cout << Man::name << " пьет кофе и делает вид, что из-за него работает приложение :)\n";
	}
	else {
		std::cout << Man::name << " пьет кофе и делает вид, что из-за нее работает приложение :)\n";
	}
}

void Frontender::programming() const
{
	std::cout << Man::name<< " пишет очень 'полезный' код\n";
}
