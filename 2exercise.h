#include <iostream>
#include <locale>
#include <string>

int ABS()//1
{
    int x;//объявление переменной х
    std::cout << "Введите число, функция вернет его модуль: ";
    while (!(std::cin >> x)) {//проверка ввода
        std::cin.clear();
        std::cin.ignore(1000, '\n');
        std::cout << "Ошибка ввода. Пожалуйста, введите целое число: ";
    }

    return abs(x);//возвращение модуля
}

std::string MakeDecision() {//4
    int x;
    int y;
    std::string ask;

    // Ввод числа x с проверкой
    std::cout << "Введите число x: ";
    while (!(std::cin >> x)) {
        std::cin.clear();
        std::cin.ignore(1000, '\n');
        std::cout << "Ошибка ввода. Введите целое число x: ";
    }

    // Ввод числа y с проверкой
    std::cout << "Введите число y: ";
    while (!(std::cin >> y)) {
        std::cin.clear();
        std::cin.ignore(1000, '\n');
        std::cout << "Ошибка ввода. Введите целое число y: ";
    }

    // Формирование строки на основе сравнения
    if (x > y) {
        ask = std::to_string(x) + " > " + std::to_string(y);  // Используем std::to_string для чисел
    }
    else if (x < y) {
        ask = std::to_string(x) + " < " + std::to_string(y);
    }
    else {
        ask = std::to_string(x) + " = " + std::to_string(y);  // Если числа равны
    }

    return ask;  // Возвращаем строку
}

int MAX3()//5
{
    int x;
    int y;
    int z;
    int ask;

    // Ввод числа x с проверкой
    std::cout << "Введите число x: ";
    while (!(std::cin >> x)) {
        std::cin.clear();
        std::cin.ignore(1000, '\n');
        std::cout << "Ошибка ввода. Введите целое число x: ";
    }
    // Ввод числа y с проверкой
    std::cout << "Введите число y: ";
    while (!(std::cin >> y)) {
        std::cin.clear();
        std::cin.ignore(1000, '\n');
        std::cout << "Ошибка ввода. Введите целое число y: ";
    }
    // Ввод числа z с проверкой
    std::cout << "Введите число z: ";
    while (!(std::cin >> z)) {
        std::cin.clear();
        std::cin.ignore(1000, '\n');
        std::cout << "Ошибка ввода. Введите целое число z: ";
    }

    if (x > y and x > z) {
        ask = x;
    }
    else if (y > x and y > z)
    {
        ask = y;
    }
    else
    {
        ask = z;
    }

    return ask;
}

bool Sum3()//6
{
    int x;
    int y;
    int z;
    bool ask;

    // Ввод числа x с проверкой
    std::cout << "Введите число x: ";
    while (!(std::cin >> x)) {
        std::cin.clear();
        std::cin.ignore(1000, '\n');
        std::cout << "Ошибка ввода. Введите целое число x: ";
    }
    // Ввод числа y с проверкой
    std::cout << "Введите число y: ";
    while (!(std::cin >> y)) {
        std::cin.clear();
        std::cin.ignore(1000, '\n');
        std::cout << "Ошибка ввода. Введите целое число y: ";
    }
    // Ввод числа z с проверкой
    std::cout << "Введите число z: ";
    while (!(std::cin >> z)) {
        std::cin.clear();
        std::cin.ignore(1000, '\n');
        std::cout << "Ошибка ввода. Введите целое число z: ";
    }

    if (x + y == 4 or x + z == 4) {
        ask = true;
    }
    else if (y + z == 4)
    {
        ask = true;
    }
    else
    {
        ask = false;
    }

    return ask;
}

std::string Day()
{
    int x;
    std::string day;

    std::cout << "Введите номер дня недели (1-7): ";
    while (!(std::cin >> x)) {
        std::cin.clear();
        std::cin.ignore(1000, '\n');
        std::cout << "Ошибка ввода. Введите целое число: ";
    }

    switch (x) {
    case 1:
        day = "Понедельник";
        break;
    case 2:
        day = "Вторник";
        break;
    case 3:
        day = "Среда";
        break;
    case 4:
        day = "Четверг";
        break;
    case 5:
        day = "Пятница";
        break;
    case 6:
        day = "Суббота";
        break;
    case 7:
        day = "Воскресенье";
        break;
    default:
        day = "Неверный номер дня!";
        break;
    }

    return day;
}

int main2() {
    std::setlocale(LC_ALL, "Russian");
    std::wcout.imbue(std::locale("ru_RU.UTF-8"));
    int choice;

    std::cout << "Список функций: 1 - int abs, 2 - String makeDecision, 3 - int max3, 4 - bool sum3, 5 - String day";
    std::cout << "Выберите номер функции";
    while (!(std::cin >> choice)) {
        std::cin.clear();
        std::cin.ignore(1000, '\n');
        std::cout << "Ошибка ввода. Пожалуйста, введите целое число: ";
    }
    if (choice == 1) {
        std::cout << ABS();
    }
    else if (choice == 2)
    {
        std::cout << MakeDecision();
    }
    else if (choice == 3)
    {
        std::cout << MAX3();
    }
    else if (choice == 4)
    {
        std::cout << Sum3();
    }
    else if (choice == 5)
    {
        std::cout << Day();
    }
    else
    {
        std::cout << "Такой функции не существует";
    }

    return 0;
}