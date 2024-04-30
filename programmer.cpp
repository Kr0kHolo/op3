#include <programmer.h>

Programmer::Programmer(int age, std::string name,
	bool isMan, std::string level): Man(age, name, isMan){
	if (level == "junior") this->level = junior;
	else if (level=="middle") this->level = middle;
	else if (level=="senior") this->level = senior;
	else this->level = junior;
}
Programmer::Programmer(std::string level) : Man(){
	if (level == "junior") this->level = junior;
	else if (level == "middle") this->level = middle;
	else if (level == "senior") this->level = senior;
	else this->level = junior;
}
Programmer::Programmer(): Man() {
	this->level = junior;
}

void Programmer::talk() {
	std::cout << name<<" снова затирает про потерю памяти в последнем проекте\n";
}

void Programmer::whoRU()
{
	if (gender == man) {
		std::cout << "Это " << name << " и он в свои " << age << " лет стал " << level<< " разработчиком\n";
	}
	else {
		std::cout << "Это " << name << " и она в свои " << age << " лет стала " << level<< " разработчиком\n";
	}
}

void Programmer::programming() const
{
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> dist(1,500);
	int fails = dist(gen);

	std::cout << name <<" залил на прод код с " << fails << " ошибками\n";
}
