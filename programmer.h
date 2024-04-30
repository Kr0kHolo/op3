#pragma once
#include <man.h>
#include <random>

class Programmer : public Man {
protected:
	std::string level;
private:
	const std::string junior = "junior";
	const std::string middle = "middle";
	const std::string senior = "senior";

public:
	Programmer(int age, std::string name,
		bool isMan, std::string level);
	Programmer(std::string level);
	Programmer();

	void talk();
	void whoRU();
	void programming() const;
};