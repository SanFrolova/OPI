#include <cctype>
#include <iostream>
#include <cstdlib>;
#include <windows.h>;
using namespace std;
int main() {
    setlocale(LC_ALL, "RU"); 
    
    int c;
    cout << "Выберете:\n   1)определение разницы значений кодов латинского алфавита \n   2)определение разницы значений кодов символа русского алфавита \n   3)вывод кода символа, соответствующего введенной цифре \n   4)выход из программы" << endl;
    cin >> c;
    switch (c) {
    case 1: {
        char X; cout << "Введите вторую букву фамилии на английском языке: "; cin >> X;
        if (isalpha(X)) {
            short razn1;
            razn1 = tolower(X) - toupper(X);
            cout << "Разница между значениями кодов в Windows-1251 заданной буквы латинского алфавита в прописном и строчном написании : " << razn1;
        }
        else {
            cout << "Error:(";
        } break;
    }

    case 2: {
        SetConsoleOutputCP(1251);
        SetConsoleCP(1251);
        unsigned char Y;  cout << "Введите вторую букву имени на русском языке : "; cin >> Y;
       if (((Y >= 0xC0) and (Y <= 0xDF)) or ((Y >= 0xE0) and (Y <= 0xFF)) or Y==184 or Y==168) {
            short razn2;
            razn2 = tolower(Y) - toupper(Y);
        
           
            cout << "Разница между значениями кодов в Windows-1251 буквы в прописном и строчном написании : " << razn2;
        }
        else {
            cout << "Error:(";
        } break;
    }

    case 3: {
        SetConsoleOutputCP(1251);
        SetConsoleCP(1251);
      
        int Z; cout << "Введите количество цифр имени : "; cin >> Z;
        
            cout << "Введённому числу соответствуюет символ: " << char(Z);
         break;
    }


    case 4: { break; }

    default: cout << "Error";




          break;
    }





    return 0;
}