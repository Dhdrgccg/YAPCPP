#include <iostream>
#include <locale>
#include <cstdlib>
#include <string>
#include <array>

int FindFirst() {
    int arr[] = { 0, 1, 2, 3, 4, 2, 2, 5 };  //  массив
    int x;  // Искомое число
    int size = sizeof(arr) / sizeof(arr[0]);  // Определение размера массива

    std::cout << "Введите число x, чтобы найти его в массиве, программа выведет индекс числа, если его нет, то -1: ";
    while (!(std::cin >> x)) {//проверка ввода
        std::cin.clear();  // Сброс состояния ошибки
        std::cin.ignore(1000, '\n');  // Игнорирование некорректного ввода
        std::cout << "Ошибка ввода. Пожалуйста, введите целое число: ";
    }

    for (int i = 0; i < size; ++i) {
        if (arr[i] == x) {
            return i;  // Возвращаем индекс первого вхождения
        }
    }
    return -1;  // Возвращаем -1, если число не найдено
}

int FindLast() {
    int arr[] = { 0, 1, 2, 3, 4, 2, 2, 5 };  //  массив
    int x;  // Искомое число
    int size = sizeof(arr) / sizeof(arr[0]);  // Определение размера массива

    std::cout << "Введите число x, чтобы найти его вхождение в массив, программа выведет индекс числа, если его нет, то -1: ";
    while (!(std::cin >> x)) {//проверка ввода
        std::cin.clear();  // Сброс состояния ошибки
        std::cin.ignore(1000, '\n');  // Игнорирование некорректного ввода
        std::cout << "Ошибка ввода. Пожалуйста, введите целое число: ";
    }

    for (int i = size - 1; i >= 0; --i) {
        if (arr[i] == x) {
            return i;  // Возвращаем индекс первого вхождения
        }
    }
    return -1;  // Возвращаем -1, если число не найдено
}

int MaxAbs() {
    int arr[] = { 1, -4, 3, -10, 9, 5, 6 };  // массив
    int size = sizeof(arr) / sizeof(arr[0]);  // Определяем размер массива
    int maxAbs = 0;  // Инициализируем максимальное значение

    for (int i = 1; i < size; ++i) {
        if (std::abs(arr[i]) > std::abs(maxAbs)) {  // Сравниваем по модулю
            maxAbs = arr[i];  // Обновляем значение максимума по модулю
        }
    }

    return maxAbs;  // Возвращаем максимальное по модулю значение (с учётом знака)
}

int main4() {
    std::setlocale(LC_ALL, "Russian");
    std::wcout.imbue(std::locale("ru_RU.UTF-8"));
    int choice;

    std::cout << "Список функций: 1 - int findFirst, 2 - int findLast, 3 - int maxAbs";
    std::cout << "Выберите номер функции: ";
    while (!(std::cin >> choice)) {
        std::cin.clear();
        std::cin.ignore(1000, '\n');
        std::cout << "Ошибка ввода. Пожалуйста, введите целое число: ";
    }
    if (choice == 1) {
        std::cout << FindFirst();
    }
    else if (choice == 2) {
        std::cout << FindLast();
    }
    else if (choice == 3) {
        std::cout << "Число с максимальным модулем в массиве: " << MaxAbs();
    }
    else
    {
        std::cout << "Такой функции не существует";
    }

    return 0;
}
