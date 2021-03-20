#include <iostream>

double GetElementConsoleDouble()
{
    while (true) // ���� ������������ �� ��� ���, ���� ������������ �� ������ ���������� ��������
    {
        double value;
        std::cin >> value;

        // �������� �� ���������� ����������
        if (std::cin.fail()) // ���� ���������� ���������� ��������� ���������,
        {
            std::cin.clear(); // �� ���������� cin � '�������' ����� ������
            std::cin.ignore(32767, '\n'); // � ������� �������� ����������� ����� �� �������� ������
            std::cout << "Oops, that input is invalid.  Please try again.\n";
        }
        else
        {
            std::cin.ignore(32767, '\n'); // ������� ������ ��������

            return value;
        }
    }
}


int GetElementConsoleInt()
{
    while (true) // ���� ������������ �� ��� ���, ���� ������������ �� ������ ���������� ��������
    {
        int value;
        std::cin >> value;

        // �������� �� ���������� ����������
        if (std::cin.fail()) // ���� ���������� ���������� ��������� ���������,
        {
            std::cin.clear(); // �� ���������� cin � '�������' ����� ������
            std::cin.ignore(32767, '\n'); // � ������� �������� ����������� ����� �� �������� ������
            std::cout << "Oops, that input is invalid.  Please try again.\n";
        }
        else
        {
            std::cin.ignore(32767, '\n'); // ������� ������ ��������

            return value;
        }
    }
}


int ReadPositiveNumber()
{
    while (true)
    {
        int value = GetElementConsoleInt();
        if (value <= 0)
        {
            std::cout << "����� ������ ���� �������������, ���������� ���\n";
        }
        else
        {
            return value;
        }
    }
}