#include <iostream>
#include <locale>

double DoubleFraction()//1
{
    double x;//Переменная x
    int y;//х без дробной части
    double z;
    std::cout << "Введите десятичную дробь: ";
    while (!(std::cin >> x)) {
        std::cin.clear();
        std::cin.ignore();
        std::cout << "Некоректный ввод. Введите десятичную дробь: ";
    }
    y = int(x);
    z = x - y;//получение дробной части
    return z;//возвращение дробной части
}

bool BoolIsPositive()//4
{
    int x;//объявление х и булевой переменной
    bool ask;
    std::cout << "Введите число x, если оно положительное, то программа выведет 1, иначе 0: ";//ввод х
    while (!(std::cin >> x)) {
        std::cin.clear();
        std::cin.ignore();
        std::cout << "Некоректный ввод. Введите число: ";
    }

    if (x >= 0) {//проверка
        ask = true;
    }
    else {
        ask = false;
    }

    return ask;
}

bool is2Digits()//5
{
    int x;//объявление х и булевой переменной
    std::cout << "Введите число x, если оно двухзначное, то программа выведет 1, иначе 0: ";//ввод х
    while (!(std::cin >> x)) {
        std::cin.clear();
        std::cin.ignore();
        std::cout << "Некоректный ввод. Введите число: ";
    }
    bool digit;

    if (x >= 10 and x < 100) {//проверка
        digit = true;
    }
    else
    {
        digit = false;
    }

    return digit;
}

bool isUpperCase()//6
{
    char x;
    char y;
    bool UpperCase;
    std::cout << "Введите букву английского алфавита, если она верхнего регистра, то программа выведет 1, иначе 0: ";
    std::cin >> x;
    y = std::toupper(x);
    if (x == y) {
        UpperCase = true;
    }
    else
    {
        UpperCase = false;
    }
    return UpperCase;
}

bool isEqual()//9
{
    int x;
    int y;
    int z;
    bool equal;

    std::cout << "Введите число x: ";
    while (!(std::cin >> x)) {
        std::cin.clear();
        std::cin.ignore();
        std::cout << "Некоректный ввод. Введите число x: ";
    }
    std::cout << "Введите число y: ";
    while (!(std::cin >> y)) {
        std::cin.clear();
        std::cin.ignore();
        std::cout << "Некоректный ввод. Введите число y: ";
    }
    std::cout << "Введите число z: ";
    while (!(std::cin >> z)) {
        std::cin.clear();
        std::cin.ignore();
        std::cout << "Некоректный ввод. Введите число z: ";
    }

    if (x == y and x == z) {
        equal = true;
    }
    else
    {
        equal = false;
    }

    return equal;
}

int main1() {
    std::setlocale(LC_ALL, "Russian");
    std::wcout.imbue(std::locale("ru_RU.UTF-8"));
    int choice;
    std::cout << "Список функций: 1 - double fraction, 2 - bool isPositive, 3 - bool is2Digits, 4 - bool isUpperCase, 5 - bool isEqual";
    std::cout << "Введите номер функции: ";

    while (!(std::cin >> choice)) {//проверка ввода
        std::cin.clear();  // Сброс состояния ошибки
        std::cin.ignore(1000, '\n');  // Игнорирование некорректного ввода
        std::cout << "Ошибка ввода. Пожалуйста, введите целое число: ";
    }

    if (choice == 1) {
        std::cout << "Дробная часть числа x: " << DoubleFraction();  // Вызов функции 1
    }
    else if (choice == 2) {
        std::cout << BoolIsPositive();  // Вызов функции 2
    }
    else if (choice == 3) {
        std::cout << is2Digits();
    }
    else if (choice == 4) {
        std::cout << isUpperCase();
    }
    else if (choice == 5) {
        std::cout << isEqual();
    }
    else
    {
        std::cout << "Такой функции не существует.";
    }

    return 0;
}