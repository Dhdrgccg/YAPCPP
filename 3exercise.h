#include <iostream>
#include <locale>
#include <cstdlib>
#include <string>

std::string ListNums() {//1
    int x;//объявление переменной х
    std::string ask;//объявление переменной ответа string

    std::cout << "Введите число x, чтобы получить последовательность от 0 до x: ";
    while (!(std::cin >> x)) {//проверка ввода
        std::cin.clear();  // Сброс состояния ошибки
        std::cin.ignore(1000, '\n');  // Игнорирование некорректного ввода
        std::cout << "Ошибка ввода. Пожалуйста, введите целое число: ";
    }

    for (int i = 0; i <= x; ++i) {//цикл для создания последовательности
        ask = ask + std::to_string(i) + " ";//перевод числа в string и добавление в переменную ответа
    }

    return ask;
}

int Pow() {//4
    int x;
    int i;
    int y;
    int ask;

    ask = 1;
    i = 0;
    std::cout << "Введите число x: ";
    while (!(std::cin >> x)) {//проверка ввода
        std::cin.clear();  // Сброс состояния ошибки
        std::cin.ignore(1000, '\n');  // Игнорирование некорректного ввода
        std::cout << "Ошибка ввода. Пожалуйста, введите целое число: ";
    }
    std::cout << "Введите число y, чтобы получить выражение x**y: ";
    while (!(std::cin >> y)) {//проверка ввода
        std::cin.clear();  // Сброс состояния ошибки
        std::cin.ignore(1000, '\n');  // Игнорирование некорректного ввода
        std::cout << "Ошибка ввода. Пожалуйста, введите целое число: ";
    }

    while (i <= y) {
        ask = ask * x;
        i += 1;
    }

    return ask;
}

int NumLen() {//5
    int x;
    int numlen;

    std::cout << "Введите число x, чтобы узнать его длину: ";
    while (!(std::cin >> x)) {//проверка ввода
        std::cin.clear();  // Сброс состояния ошибки
        std::cin.ignore(1000, '\n');  // Игнорирование некорректного ввода
        std::cout << "Ошибка ввода. Пожалуйста, введите целое число: ";
    }
    numlen = 0;

    while (x != 0)//подсчет длины x
    {
        x = x / 10;
        numlen = numlen + 1;
    }

    return numlen;
}

bool EqualNum() {//6
    int x;//инициализация переменных
    int y;//y и z переменные для проверки
    int z;
    bool equalask;

    std::cout << "Введите число x, если все цифры в числе x равны, то программа выведет 1, иначе 0: ";
    while (!(std::cin >> x)) {//проверка ввода
        std::cin.clear();  // Сброс состояния ошибки
        std::cin.ignore(1000, '\n');  // Игнорирование некорректного ввода
        std::cout << "Ошибка ввода. Пожалуйста, введите целое число: ";
    }
    y = 0;
    z = 0;
    equalask = true;

    while (x != 0) {
        if (y == z) {
            y = x % 10;//y и z проверяют, чтобы 2 соседних цифры были одинаковыми
            x = x / 10;//переход к следующему числу для проверки
            z = x % 10;
        }
        else
        {
            equalask = false;//если 2 соседних цифры не равны остановка работы цикла
            break;
        }
    }

    return equalask;//возвращение ответа
}

std::string ReverseNumb() {//2
    int x;
    std::string ask;//объявление переменной ответа string

    std::cout << "Введите число x, чтобы получить последовательность от x до 0: ";
    while (!(std::cin >> x)) {//проверка ввода
        std::cin.clear();  // Сброс состояния ошибки
        std::cin.ignore(1000, '\n');  // Игнорирование некорректного ввода
        std::cout << "Ошибка ввода. Пожалуйста, введите целое число: ";
    }

    for (int i = x; i >= 0; i--) {//цикл для создания последовательности
        ask = ask + std::to_string(i) + " ";//перевод числа в string и добавление в переменную ответа
    }

    return ask;
}

int main3()
{
    std::setlocale(LC_ALL, "Russian");
    std::wcout.imbue(std::locale("ru_RU.UTF-8"));
    int choice;

    std::cout << "Список функций: 1 - String listNums, 2 -  int pow, 3 - int numLen, 4 - bool equalNum, 5 - String reverseListNums";
    std::cout << "Введите номер функции: ";
    while (!(std::cin >> choice)) {//проверка ввода
        std::cin.clear();  // Сброс состояния ошибки
        std::cin.ignore(1000, '\n');  // Игнорирование некорректного ввода
        std::cout << "Ошибка ввода. Пожалуйста, введите целое число: ";
    }

    if (choice == 1) {
        std::cout << ListNums();
    }
    else if (choice == 2) {
        std::cout << Pow();
    }
    else if (choice == 3) {
        std::cout << NumLen();
    }
    else if (choice == 4) {
        std::cout << EqualNum();
    }
    else if (choice == 5) {
        std::cout << ReverseNumb();
    }
    else
    {
        std::cout << "Такой функции не существует";
    }

    return 0;
}