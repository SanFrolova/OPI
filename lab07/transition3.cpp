#include "transition3.h"
#include <cctype>
#include <iostream>
#include <cstdlib>
#include <windows.h>
using namespace std;

int solveTaskWithNumber()
{ //��������� ������� �������� ���������� ����� Z � ��� ���������������� 
  //�� �������, ��������� ������� ������� Windows - 1251
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int decimalNumber; cout << "������� ���������� ���� ����� : "; cin >> decimalNumber;
    /*����� ����� ���������������� � ������*/
    cout << "��������� ����� �������������� ������: " << char(decimalNumber);
    return 0;
}
