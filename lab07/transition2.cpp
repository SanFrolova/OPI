#include "transition2.h"
#include <iostream>
#include <windows.h>
using namespace std;
int solveTaskWithRussianSymbol()
{
   // ���������� ������� �������� ����� � Windows - 1251 �������� ����� Y
   // �������� �������� � ��������� � �������� ���������.
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    unsigned char russianLeter;  cout << "������� ������ ����� ����� �� ������� ����� : "; cin >> russianLeter;
    /*�������� �� �������������� ������ �������� �������� (� ��������)*/
    if (((russianLeter >= 0xC0) and (russianLeter <= 0xDF)) or ((russianLeter >= 0xE0) and (russianLeter <= 0xFF)) or russianLeter == 184 or russianLeter == 168) {
        short differenceRussianSymbols;
        differenceRussianSymbols = tolower(russianLeter) - toupper(russianLeter);
        cout << "������� ����� ���������� ����� � Windows-1251 ����� � ��������� � �������� ��������� : " << differenceRussianSymbols;
    }

    else {
        cout << "Error:(";
    }
    return 0;
}
