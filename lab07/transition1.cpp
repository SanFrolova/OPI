#include "transition1.h"
#include <iostream>

#include <windows.h>
using namespace std;
int solveTaskWithLatinSymbol()
{  //���������� ������� �������� ����� � Windows-1251 �������� ����� � 
   //���������� �������� � ��������� � �������� ���������.

    char englishLetter; cout << "������� ������ ����� ������� �� ���������� �����: "; cin >> englishLetter;
   /*�������� �� �������������� ���������� ��������*/ 

    if (isalpha(englishLetter)){
        short differenceLatinSymbols;
        differenceLatinSymbols = tolower(englishLetter) - toupper(englishLetter);
        cout << "������� ����� ���������� ����� � Windows-1251 �������� ����� ���������� �������� � ��������� � �������� ��������� : " << differenceLatinSymbols;
    }
    else {
        cout << "Error:(";
    }
	return 0;
}
