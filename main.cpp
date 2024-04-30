#include <teamlead.h>
#include <frontender.h>

int main() {
	setlocale(2,"RU");

	Man a;
	a.talk();
	a.walk();

	std::cout << "\n";
	Man b{ 25, "����", false };

	b.talk();
	b.walk();

	std::cout << "\n";
	Programmer c(36, "����", true, "junior");

	c.talk();
	c.programming();

	std::cout << "\n";
	Designer f(15, "��������", false, "3D");

	f.talk();
	f.whoRU();
	f.working();

	std::cout << "\n";
	Teamlead s(23, "�����", true);

	s.talk();
	s.programming();
	s.working();
	s.whoRU();

	return 0;
}