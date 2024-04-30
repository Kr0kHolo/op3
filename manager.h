#pragma once
#include <man.h>

class Manager : public Man {
protected:
	std::string talkLevel;
private:
	const std::string low = "2/10";
	const std::string middle = "5/10";
	const std::string top = "10/10";

public:
	Manager(int age, std::string name,
		bool isMan, std::string level);
	Manager(std::string level);
	Manager();

	void talk();
	void whoRU();
	void working() const;
};