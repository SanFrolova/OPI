#include "transition2.h"
#include <iostream>
#include <windows.h>
using namespace std;
int solveTaskWithRussianSymbol()
{
   // Определите разницу значений кодов в Windows - 1251 заданной буквы Y
   // русского алфавита в прописном и строчном написании.
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    unsigned char russianLeter;  cout << "Введите вторую букву имени на русском языке : "; cin >> russianLeter;
    /*проверка на принадлежность буквам русского алфавита (ё отдельно)*/
    if (((russianLeter >= 0xC0) and (russianLeter <= 0xDF)) or ((russianLeter >= 0xE0) and (russianLeter <= 0xFF)) or russianLeter == 184 or russianLeter == 168) {
        short differenceRussianSymbols;
        differenceRussianSymbols = tolower(russianLeter) - toupper(russianLeter);
        cout << "Разница между значениями кодов в Windows-1251 буквы в прописном и строчном написании : " << differenceRussianSymbols;
    }

    else {
        cout << "Error:(";
    }
    return 0;
}
