#pragma once
#include <man.h>

class Designer : public Man {
protected:
	std::string style;
private:
	const std::string styles[3] = { "PixelArt", "3D", "2D" };

public:
	Designer(int age, std::string name,
		bool isMan, std::string style);
	Designer();

	void talk();
	void whoRU();
	void virtual working() const;
};