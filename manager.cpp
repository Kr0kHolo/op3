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
	if (talkLevel == low) std::cout << name << " безуспешно пытается решить проблему посетителя\n";
	else if (talkLevel == middle) std::cout << "У "<< name << " почти получилось решить проблему посетителя\n";
	else if (talkLevel == top) std::cout<<  "У " << name << " получилось решить проблему посетителя, так еще посетитель доплатил\n";
}

void Manager::whoRU()
{
	if (gender == man) {
		std::cout << "Это " << name << " и он в свои " << age << " лет стал менеджером с навыком говорения - " <<talkLevel<<  "\n";
	}
	else {
		std::cout << "Это " << name << " и она в свои " << age << " лет стала менеджером с навыком говорения - " << talkLevel << "\n";
	}
}

void Manager::working() const
{
	std::cout << name << " как обычно следит за всеми стоя у кулера";
}
