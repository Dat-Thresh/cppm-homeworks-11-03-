#include <iostream>
#include "ClassLeaver.h"
#include <Windows.h>
int main()
{
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::string name;
	std::cout << "Введите имя: ";
	getline(std::cin, name);
	Leaver bye;
	std::cout << bye.leave(name) << std::endl;
	return 0;
}
