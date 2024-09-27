#include <iostream>
#include <locale>
#include <cstdlib>
#include "1exercise.h"
#include "2exercise.h"
#include "3exercise.h"
#include "4exercise.h"

int main() {
	int choise;
	std::setlocale(LC_ALL, "Russian");
	std::wcout.imbue(std::locale("ru_RU.UTF-8"));

	std::cout << "Выберите файл (1-4): ";
	while (!(std::cin >> choise)) {
		std::cin.clear();
		std::cin.ignore(1000, '\n');
		std::cout << "Ошибка ввода. Пожалуйста, введите целое число: ";
	}
	if (choise == 1) {
		main1();
	}
	else if (choise == 2)
	{
		main2();
	}
	else if (choise == 3)
	{
		main3();
	}
	else if (choise == 4)
	{
		main4();
	}
	else
	{
		std::cout << "Такой функции не существует";
	}

	return 0;
}