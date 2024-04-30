#include <designer.h>

Designer::Designer(int age, std::string name, bool isMan, std::string style) : Man(age, name, isMan)
{
	for (std::string i : styles) {
		if (style == i) {
			this->style = style;
			return;
		}
	}
	std::cout << "ѕодобного стил€ не предусмотрено, поставлен стандартный PixelArt";
	this->style = styles[0];
}

Designer::Designer() : Man()
{
	this->style = styles[0];
}

void Designer::talk()
{
	std::cout << name << " рассказывает о из€щных визуальных решени€х в последней новинке геймдева\n";
}

void Designer::whoRU()
{
	if (gender == man) {
		std::cout << "Ёто " << name << " и он в свои " << age << " лет научилс€ рисовать в стиле " << style << std::endl;
	}
	else {
		std::cout << "Ёто " << name << " и она в свои " << age << " лет научилась рисовать в стиле " << style << std::endl;
	}
}

void Designer::working() const
{
	std::cout << name<< " придумывает новый UI дл€ приложени€ на смартфон\n";
}
