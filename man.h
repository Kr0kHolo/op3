#pragma once
#include <iostream>

class Man {
protected:
	int age;
	std::string name;
	const std::string man = "man";
	const std::string women = "women";

public:
	std::string gender;
	Man(int age, std::string name, bool isMan);
	Man();

	void walk();
	void virtual whoRU();
	void virtual talk();
};
