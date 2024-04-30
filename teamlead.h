#pragma once

#include <programmer.h>
#include <manager.h>

class Teamlead final : public Programmer, public Manager {
public:
	Teamlead(int age, std::string name,
		bool isMan);
	Teamlead();

	void talk();
	void whoRU();
	void working() const;
	void programming() const;
};