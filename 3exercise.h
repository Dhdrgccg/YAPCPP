#include <iostream>
#include <locale>
#include <cstdlib>
#include <string>

std::string ListNums() {//1
    int x;//���������� ���������� �
    std::string ask;//���������� ���������� ������ string

    std::cout << "������� ����� x, ����� �������� ������������������ �� 0 �� x: ";
    while (!(std::cin >> x)) {//�������� �����
        std::cin.clear();  // ����� ��������� ������
        std::cin.ignore(1000, '\n');  // ������������� ������������� �����
        std::cout << "������ �����. ����������, ������� ����� �����: ";
    }

    for (int i = 0; i <= x; ++i) {//���� ��� �������� ������������������
        ask = ask + std::to_string(i) + " ";//������� ����� � string � ���������� � ���������� ������
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
    std::cout << "������� ����� x: ";
    while (!(std::cin >> x)) {//�������� �����
        std::cin.clear();  // ����� ��������� ������
        std::cin.ignore(1000, '\n');  // ������������� ������������� �����
        std::cout << "������ �����. ����������, ������� ����� �����: ";
    }
    std::cout << "������� ����� y, ����� �������� ��������� x**y: ";
    while (!(std::cin >> y)) {//�������� �����
        std::cin.clear();  // ����� ��������� ������
        std::cin.ignore(1000, '\n');  // ������������� ������������� �����
        std::cout << "������ �����. ����������, ������� ����� �����: ";
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

    std::cout << "������� ����� x, ����� ������ ��� �����: ";
    while (!(std::cin >> x)) {//�������� �����
        std::cin.clear();  // ����� ��������� ������
        std::cin.ignore(1000, '\n');  // ������������� ������������� �����
        std::cout << "������ �����. ����������, ������� ����� �����: ";
    }
    numlen = 0;

    while (x != 0)//������� ����� x
    {
        x = x / 10;
        numlen = numlen + 1;
    }

    return numlen;
}

bool EqualNum() {//6
    int x;//������������� ����������
    int y;//y � z ���������� ��� ��������
    int z;
    bool equalask;

    std::cout << "������� ����� x, ���� ��� ����� � ����� x �����, �� ��������� ������� 1, ����� 0: ";
    while (!(std::cin >> x)) {//�������� �����
        std::cin.clear();  // ����� ��������� ������
        std::cin.ignore(1000, '\n');  // ������������� ������������� �����
        std::cout << "������ �����. ����������, ������� ����� �����: ";
    }
    y = 0;
    z = 0;
    equalask = true;

    while (x != 0) {
        if (y == z) {
            y = x % 10;//y � z ���������, ����� 2 �������� ����� ���� �����������
            x = x / 10;//������� � ���������� ����� ��� ��������
            z = x % 10;
        }
        else
        {
            equalask = false;//���� 2 �������� ����� �� ����� ��������� ������ �����
            break;
        }
    }

    return equalask;//����������� ������
}

std::string ReverseNumb() {//2
    int x;
    std::string ask;//���������� ���������� ������ string

    std::cout << "������� ����� x, ����� �������� ������������������ �� x �� 0: ";
    while (!(std::cin >> x)) {//�������� �����
        std::cin.clear();  // ����� ��������� ������
        std::cin.ignore(1000, '\n');  // ������������� ������������� �����
        std::cout << "������ �����. ����������, ������� ����� �����: ";
    }

    for (int i = x; i >= 0; i--) {//���� ��� �������� ������������������
        ask = ask + std::to_string(i) + " ";//������� ����� � string � ���������� � ���������� ������
    }

    return ask;
}

int main3()
{
    std::setlocale(LC_ALL, "Russian");
    std::wcout.imbue(std::locale("ru_RU.UTF-8"));
    int choice;

    std::cout << "������ �������: 1 - String listNums, 2 -  int pow, 3 - int numLen, 4 - bool equalNum, 5 - String reverseListNums";
    std::cout << "������� ����� �������: ";
    while (!(std::cin >> choice)) {//�������� �����
        std::cin.clear();  // ����� ��������� ������
        std::cin.ignore(1000, '\n');  // ������������� ������������� �����
        std::cout << "������ �����. ����������, ������� ����� �����: ";
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
        std::cout << "����� ������� �� ����������";
    }

    return 0;
}