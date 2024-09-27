#include <iostream>
#include <locale>
#include <cstdlib>
#include <string>
#include <array>

int FindFirst() {
    int arr[] = { 0, 1, 2, 3, 4, 2, 2, 5 };  //  ������
    int x;  // ������� �����
    int size = sizeof(arr) / sizeof(arr[0]);  // ����������� ������� �������

    std::cout << "������� ����� x, ����� ����� ��� � �������, ��������� ������� ������ �����, ���� ��� ���, �� -1: ";
    while (!(std::cin >> x)) {//�������� �����
        std::cin.clear();  // ����� ��������� ������
        std::cin.ignore(1000, '\n');  // ������������� ������������� �����
        std::cout << "������ �����. ����������, ������� ����� �����: ";
    }

    for (int i = 0; i < size; ++i) {
        if (arr[i] == x) {
            return i;  // ���������� ������ ������� ���������
        }
    }
    return -1;  // ���������� -1, ���� ����� �� �������
}

int FindLast() {
    int arr[] = { 0, 1, 2, 3, 4, 2, 2, 5 };  //  ������
    int x;  // ������� �����
    int size = sizeof(arr) / sizeof(arr[0]);  // ����������� ������� �������

    std::cout << "������� ����� x, ����� ����� ��� ��������� � ������, ��������� ������� ������ �����, ���� ��� ���, �� -1: ";
    while (!(std::cin >> x)) {//�������� �����
        std::cin.clear();  // ����� ��������� ������
        std::cin.ignore(1000, '\n');  // ������������� ������������� �����
        std::cout << "������ �����. ����������, ������� ����� �����: ";
    }

    for (int i = size - 1; i >= 0; --i) {
        if (arr[i] == x) {
            return i;  // ���������� ������ ������� ���������
        }
    }
    return -1;  // ���������� -1, ���� ����� �� �������
}

int MaxAbs() {
    int arr[] = { 1, -4, 3, -10, 9, 5, 6 };  // ������
    int size = sizeof(arr) / sizeof(arr[0]);  // ���������� ������ �������
    int maxAbs = 0;  // �������������� ������������ ��������

    for (int i = 1; i < size; ++i) {
        if (std::abs(arr[i]) > std::abs(maxAbs)) {  // ���������� �� ������
            maxAbs = arr[i];  // ��������� �������� ��������� �� ������
        }
    }

    return maxAbs;  // ���������� ������������ �� ������ �������� (� ������ �����)
}

int main4() {
    std::setlocale(LC_ALL, "Russian");
    std::wcout.imbue(std::locale("ru_RU.UTF-8"));
    int choice;

    std::cout << "������ �������: 1 - int findFirst, 2 - int findLast, 3 - int maxAbs";
    std::cout << "�������� ����� �������: ";
    while (!(std::cin >> choice)) {
        std::cin.clear();
        std::cin.ignore(1000, '\n');
        std::cout << "������ �����. ����������, ������� ����� �����: ";
    }
    if (choice == 1) {
        std::cout << FindFirst();
    }
    else if (choice == 2) {
        std::cout << FindLast();
    }
    else if (choice == 3) {
        std::cout << "����� � ������������ ������� � �������: " << MaxAbs();
    }
    else
    {
        std::cout << "����� ������� �� ����������";
    }

    return 0;
}
