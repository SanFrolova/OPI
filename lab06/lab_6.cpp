#include <cctype>
#include <iostream>
#include <cstdlib>;
#include <windows.h>;
using namespace std;

void task1(char X) {
    //cout << "Введите вторую букву фамилии на английском языке: "; cin >> X;
    if (isalpha(X)) {
        short razn1;
        razn1 = tolower(X) - toupper(X);
        cout << "Разница между значениями кодов в Windows-1251 заданной буквы Х латинского алфавита в прописном и строчном написании : " << razn1;}
    else {cout << "Error:("; }
}



void task2(char Y) {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    //  cout << "Введите вторую букву имени на русском языке : "; cin >> Y;
    if (((Y >= 0xC0) and (Y <= 0xDF)) or ((Y >= 0xE0) and (Y <= 0xFF))) {
        short razn2;
        razn2 = tolower(Y) - toupper(Y);
        cout << "Разница между значениями кодов в Windows-1251 буквы в  прописном и строчном написании : " << razn2; }
    else { cout << "Error:(";}
}



void task3(char Z) {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
   // cout << "Введите количество цифр имени : "; cin >> Z;
    cout << "Введённому числу соответствуюет символ: " << char(Z);
}









int main() {setlocale(LC_ALL, "RU");
int c, Z;    char X; unsigned char Y; 
        cout << "Введите X: "; cin >> X;
        cout << "Введите Y: "; cin >> Y;
        cout << "Введите Z: "; cin >> Z;

    while (1) {

      
        cout << "Выберите вариант: 1, 2, 3, или 4(выход): "; cin >> c;
        if (c == 4) break;        
       
        switch (c) { 
        case 1:  task1(X);   break;           
        case 2:  task2(Y);   break;
        case 3:  task3(Z);   break;            
        default: cout << "Неверный вариант." << std::endl; }
    }
    return 0;
}
