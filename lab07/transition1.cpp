#include "transition1.h"
#include <iostream>

#include <windows.h>
using namespace std;
int solveTaskWithLatinSymbol()
{  //ќпределите разницу значений кодов в Windows-1251 заданной буквы ’ 
   //латинского алфавита в прописном и строчном написании.

    char englishLetter; cout << "¬ведите вторую букву фамилии на английском €зыке: "; cin >> englishLetter;
   /*проверка на принадлежность латинскому алфавиту*/ 

    if (isalpha(englishLetter)){
        short differenceLatinSymbols;
        differenceLatinSymbols = tolower(englishLetter) - toupper(englishLetter);
        cout << "–азница между значени€ми кодов в Windows-1251 заданной буквы латинского алфавита в прописном и строчном написании : " << differenceLatinSymbols;
    }
    else {
        cout << "Error:(";
    }
	return 0;
}
