#include <iostream>
#include <locale>

double DoubleFraction()//1
{
    double x;//���������� x
    int y;//� ��� ������� �����
    double z;
    std::cout << "������� ���������� �����: ";
    while (!(std::cin >> x)) {
        std::cin.clear();
        std::cin.ignore();
        std::cout << "����������� ����. ������� ���������� �����: ";
    }
    y = int(x);
    z = x - y;//��������� ������� �����
    return z;//����������� ������� �����
}

bool BoolIsPositive()//4
{
    int x;//���������� � � ������� ����������
    bool ask;
    std::cout << "������� ����� x, ���� ��� �������������, �� ��������� ������� 1, ����� 0: ";//���� �
    while (!(std::cin >> x)) {
        std::cin.clear();
        std::cin.ignore();
        std::cout << "����������� ����. ������� �����: ";
    }

    if (x >= 0) {//��������
        ask = true;
    }
    else {
        ask = false;
    }

    return ask;
}

bool is2Digits()//5
{
    int x;//���������� � � ������� ����������
    std::cout << "������� ����� x, ���� ��� �����������, �� ��������� ������� 1, ����� 0: ";//���� �
    while (!(std::cin >> x)) {
        std::cin.clear();
        std::cin.ignore();
        std::cout << "����������� ����. ������� �����: ";
    }
    bool digit;

    if (x >= 10 and x < 100) {//��������
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
    std::cout << "������� ����� ����������� ��������, ���� ��� �������� ��������, �� ��������� ������� 1, ����� 0: ";
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

    std::cout << "������� ����� x: ";
    while (!(std::cin >> x)) {
        std::cin.clear();
        std::cin.ignore();
        std::cout << "����������� ����. ������� ����� x: ";
    }
    std::cout << "������� ����� y: ";
    while (!(std::cin >> y)) {
        std::cin.clear();
        std::cin.ignore();
        std::cout << "����������� ����. ������� ����� y: ";
    }
    std::cout << "������� ����� z: ";
    while (!(std::cin >> z)) {
        std::cin.clear();
        std::cin.ignore();
        std::cout << "����������� ����. ������� ����� z: ";
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
    std::cout << "������ �������: 1 - double fraction, 2 - bool isPositive, 3 - bool is2Digits, 4 - bool isUpperCase, 5 - bool isEqual";
    std::cout << "������� ����� �������: ";

    while (!(std::cin >> choice)) {//�������� �����
        std::cin.clear();  // ����� ��������� ������
        std::cin.ignore(1000, '\n');  // ������������� ������������� �����
        std::cout << "������ �����. ����������, ������� ����� �����: ";
    }

    if (choice == 1) {
        std::cout << "������� ����� ����� x: " << DoubleFraction();  // ����� ������� 1
    }
    else if (choice == 2) {
        std::cout << BoolIsPositive();  // ����� ������� 2
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
        std::cout << "����� ������� �� ����������.";
    }

    return 0;
}