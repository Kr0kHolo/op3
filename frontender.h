#pragma once

#include <designer.h>
#include <programmer.h>

class Frontender final : public Programmer, public Designer {
private:
	const std::string styles[3] = { "UI/UX", "Colorscheme", "Logo" };

public:
	Frontender(int age, std::string name,
		bool isMan, std::string level, std::string style);
	Frontender();

	void talk();
	void whoRU();
	void working() const;
	void programming() const;
};