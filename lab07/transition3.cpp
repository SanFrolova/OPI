#include "transition3.h"
#include <cctype>
#include <iostream>
#include <cstdlib>
#include <windows.h>
using namespace std;

int solveTaskWithNumber()
{ //¬ыполните перевод заданной дес€тичной цифры Z в код соответствующего 
  //ей символа, использу€ кодовую таблицу Windows - 1251
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int decimalNumber; cout << "¬ведите количество цифр имени : "; cin >> decimalNumber;
    /*вывод числа преобразованного в символ*/
    cout << "¬ведЄнному числу соответствуюет символ: " << char(decimalNumber);
    return 0;
}
