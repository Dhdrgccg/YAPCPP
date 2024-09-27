#include <iostream>
#include <locale>
#include <string>

int ABS()//1
{
    int x;//���������� ���������� �
    std::cout << "������� �����, ������� ������ ��� ������: ";
    while (!(std::cin >> x)) {//�������� �����
        std::cin.clear();
        std::cin.ignore(1000, '\n');
        std::cout << "������ �����. ����������, ������� ����� �����: ";
    }

    return abs(x);//����������� ������
}

std::string MakeDecision() {//4
    int x;
    int y;
    std::string ask;

    // ���� ����� x � ���������
    std::cout << "������� ����� x: ";
    while (!(std::cin >> x)) {
        std::cin.clear();
        std::cin.ignore(1000, '\n');
        std::cout << "������ �����. ������� ����� ����� x: ";
    }

    // ���� ����� y � ���������
    std::cout << "������� ����� y: ";
    while (!(std::cin >> y)) {
        std::cin.clear();
        std::cin.ignore(1000, '\n');
        std::cout << "������ �����. ������� ����� ����� y: ";
    }

    // ������������ ������ �� ������ ���������
    if (x > y) {
        ask = std::to_string(x) + " > " + std::to_string(y);  // ���������� std::to_string ��� �����
    }
    else if (x < y) {
        ask = std::to_string(x) + " < " + std::to_string(y);
    }
    else {
        ask = std::to_string(x) + " = " + std::to_string(y);  // ���� ����� �����
    }

    return ask;  // ���������� ������
}

int MAX3()//5
{
    int x;
    int y;
    int z;
    int ask;

    // ���� ����� x � ���������
    std::cout << "������� ����� x: ";
    while (!(std::cin >> x)) {
        std::cin.clear();
        std::cin.ignore(1000, '\n');
        std::cout << "������ �����. ������� ����� ����� x: ";
    }
    // ���� ����� y � ���������
    std::cout << "������� ����� y: ";
    while (!(std::cin >> y)) {
        std::cin.clear();
        std::cin.ignore(1000, '\n');
        std::cout << "������ �����. ������� ����� ����� y: ";
    }
    // ���� ����� z � ���������
    std::cout << "������� ����� z: ";
    while (!(std::cin >> z)) {
        std::cin.clear();
        std::cin.ignore(1000, '\n');
        std::cout << "������ �����. ������� ����� ����� z: ";
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

    // ���� ����� x � ���������
    std::cout << "������� ����� x: ";
    while (!(std::cin >> x)) {
        std::cin.clear();
        std::cin.ignore(1000, '\n');
        std::cout << "������ �����. ������� ����� ����� x: ";
    }
    // ���� ����� y � ���������
    std::cout << "������� ����� y: ";
    while (!(std::cin >> y)) {
        std::cin.clear();
        std::cin.ignore(1000, '\n');
        std::cout << "������ �����. ������� ����� ����� y: ";
    }
    // ���� ����� z � ���������
    std::cout << "������� ����� z: ";
    while (!(std::cin >> z)) {
        std::cin.clear();
        std::cin.ignore(1000, '\n');
        std::cout << "������ �����. ������� ����� ����� z: ";
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

    std::cout << "������� ����� ��� ������ (1-7): ";
    while (!(std::cin >> x)) {
        std::cin.clear();
        std::cin.ignore(1000, '\n');
        std::cout << "������ �����. ������� ����� �����: ";
    }

    switch (x) {
    case 1:
        day = "�����������";
        break;
    case 2:
        day = "�������";
        break;
    case 3:
        day = "�����";
        break;
    case 4:
        day = "�������";
        break;
    case 5:
        day = "�������";
        break;
    case 6:
        day = "�������";
        break;
    case 7:
        day = "�����������";
        break;
    default:
        day = "�������� ����� ���!";
        break;
    }

    return day;
}

int main2() {
    std::setlocale(LC_ALL, "Russian");
    std::wcout.imbue(std::locale("ru_RU.UTF-8"));
    int choice;

    std::cout << "������ �������: 1 - int abs, 2 - String makeDecision, 3 - int max3, 4 - bool sum3, 5 - String day";
    std::cout << "�������� ����� �������";
    while (!(std::cin >> choice)) {
        std::cin.clear();
        std::cin.ignore(1000, '\n');
        std::cout << "������ �����. ����������, ������� ����� �����: ";
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
        std::cout << "����� ������� �� ����������";
    }

    return 0;
}